 #include <stdio.h>

int main (void){
	int choice = -1;
     printf("simple calculator \n");
   while (choice !=0)
   {
printf("1) Add\n");
printf("2) stbtract\n");
printf("3) Multiply\n");
printf("4) Divide\n");
printf("0) Quit\n");
printf("choice: ");


if (scanf("%d", &choice) !=1)
	return(1);
if (choice == 0)
	printf("Bye!\n");
else if (choice < 0 || choice > 4 )
	printf("Invalid choice .\n");
   }
   return (0);

}

