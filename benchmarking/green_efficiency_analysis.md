# Green Tech Efficiency & Benchmarking Lab — Written Report

## Measurement Methodology

This analysis uses the recorded outputs in `baseline_loop-metrics.md` and `comparison_algorithms-metrics.md` from the `benchmarking` project. The supplied programs use C's `clock()` function and divide the elapsed clock ticks by `CLOCKS_PER_SEC` to report processor time in seconds. The baseline program performs 100,000,000 iterations, while the comparison program evaluates two implementations using a dataset of 50,000 elements. Each recorded experiment contains three consecutive runs. I calculated arithmetic means from those recorded values rather than selecting the fastest run. The original benchmark workloads and algorithms were not changed for this analysis. Although measurements should be taken in the same environment, the files alone do not independently verify the machine configuration or background system load.

The baseline times were **0.292101**, **0.270648**, and **0.289085 seconds**, giving an average of **0.283945 seconds**. These values provide a reference for discussing variation between repeated runs, not a direct performance comparison with the other program, which performs different work.

## Observed Performance Differences

For the comparison program, the naive implementation took **2.760486**, **2.753715**, and **2.766548 seconds**. Its mean was **2.760250 seconds**. The single-pass implementation took **0.000107**, **0.000106**, and **0.000106 seconds**, averaging approximately **0.00010633 seconds**. Dividing the two unrounded averages gives a measured time ratio of approximately **25,958.46**. Thus, within these recorded runs, the naive implementation used dramatically more processor time.

However, the two functions also produced **different results**: the naive function returned **625,025,000**, whereas the single-pass function returned **25,000**. Examination of the supplied code explains this difference: the nested-loop version counts even values repeatedly, while the single-pass version counts each even element once. Therefore, this benchmark demonstrates the cost of additional repeated work, but it does **not** establish a fair speedup between two functionally equivalent solutions.

The separate instrumentation program defines build, process, and checksum-reduction phases. Its source contains timing boundaries for these stages, but no measured four-line output from that program was available in the recorded evidence used here. Consequently, I do not assign numerical times or rank those phases.

## Relation Between Runtime and Energy Consumption

Processor time is a useful, limited indicator of computational work. The measured difference between the naive and single-pass versions is consistent with the extra iterations present in the naive algorithm. Reducing unnecessary operations can reduce how long a processor remains active on a task. Nevertheless, **execution time is not a direct energy measurement**. Actual energy use depends on processor power, operating conditions, hardware behavior, and other activity. The results support conclusions about measured processor time, not a quantified electricity saving or carbon-emissions reduction.

## Limitations of the Experiment

Only three runs were recorded for each benchmark. For example, baseline time varied between **0.270648** and **0.292101 seconds**, a range of **0.021453 seconds**. The measurements do not establish confidence intervals or explain the causes of variation. The single-pass durations are extremely short, so clock resolution and measurement overhead may have a substantial relative effect. No power meter was used. Most importantly, the two comparison functions have unequal outputs, and the instrumentation program's phase timings are not yet available for numerical analysis.

## Practical Engineering Takeaway

Measure the same workload repeatedly, preserve original outputs, and calculate averages before drawing conclusions. The recorded naive algorithm spent far longer running than the single-pass algorithm, but correctness must be checked before calling one implementation a replacement for another. For future experiments, first require equivalent results, then repeat measurements under documented conditions and, when assessing sustainability, measure actual energy if suitable equipment is available. Evidence-based optimization means improving **correctness and efficiency together**, not relying on a single impressive timing ratio.
