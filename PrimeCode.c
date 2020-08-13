#include<stdio.h>  
int main()
{    
    int num,i,mid=0,flag=0,size;    
    printf("Enter the number:");    
    scanf("%d",&num);  
    //int num=(int)n;                         //typecasting done, to convert float and double to int
    size = sizeof(num);
    if (size==4){
    if (num==0 || num==1)                   //as 0 and 1 are not considered as prime numbers
        {
            printf("%d is not considered as prime number", num);
            flag=1;
        }
    else if(num<0)                          //if negative number entered
        {
            printf("Negative numbers are not considered as prime\n Please enter positive number");
            flag=1;
        }
    else
        {
            mid=num/2;                      
            for(i=2;i<=mid;i++)    
                {    
                    if(num%i==0)    
                        {    
                            printf("Entered number is not prime" );    
                            flag=1;    
                            break;    
                        }    
                }                  
           
        }  
    if(flag==0)    
        printf("Entered number is prime");}
    else
    {
        printf("enter integer");
    }
    return 0;  
}
