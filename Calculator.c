#include <stdio.h>
int main()
{
    int add(int a, int b)
    {
        return a+b;                 		//perform addition
    }
    int sub(int a, int b)
    {
        return a-b;                 		//perform subtraction
    }
    int (*aptr) (int,int)=&add;     		//aptr is function pointer which stores the address of add function 
    int (*sptr) (int,int)=&sub;     		//sptr is function pointer which stores the address of sub function
    int addition=(aptr)(2,3);       		//take the input values to perform addition
    int subtraction=(sptr)(6,4);    		//take the input values to perform  subtraction
    printf("Sum is %d\n",addition); 		//print the result of addition
    printf("Difference is %d",subtraction);     //print  the result of subtraction
    return 0;
}