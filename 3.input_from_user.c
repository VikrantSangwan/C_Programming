# include <stdio.h>


int main(){


int a,b;

printf("Enter the value of first Variable a \n");
scanf("%d",&a);

//%d,%f,%c --> format specifier.
//& ---> address of a.

printf("Enter the value of first Variable b \n");
scanf("%d",&b);

printf("The sum of Variables is %d\n", a+b );

return 0;
//This is to say the program has run successfully.
}