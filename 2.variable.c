# include<stdio.h>

int main(){

	int a =4;
	float b =9.87;
	char c = 'A';

	printf("The Value of a is %d\n",a );
	//The value of a can be printed using %d as a is interger
	// the value of %d is replace with a.

	printf("The value of f is %f\n",b );
	printf("The value of c is %c\n",c );

	//Similarly %f is replace with float value of b, 
	//%c is replace with char value of c.
	
	int d =20;
	printf("The sum of these two interger is %d\n", a + d);

	return 0;
}