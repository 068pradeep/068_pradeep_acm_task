// Student name - Pradeep Vishwaakrma 
// Roll Number - 205121068
#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>
#include <time.h>     
int main()  
{    
    int i,attempts=0,diff=0,num,n,a; 
    printf("Please chose the difficullty level\nEnter 1 for EASY\nEnter 2 for MEDIUM\nEnter 3 for DIFFICULT\n");
    scanf("%d",&diff);
    switch(diff)
   {
         case 1 :  a = 100 ;
         break;
         case 2 :  a = 1000;
         break;
         case 3 :  a = 10000;
         break;   
    }
    srand(time(NULL));
	num = (rand() % (a-1 + 1))+1;  
    do{
    	if(attempts==0)
		{
    		printf ("Guess any no. from 1 to %d \n",a); 
		}
    //	printf ("Try again \n");
    	scanf("%d",&n);
    	if(n>num)
		{
    		printf("%d is too big \n",n);
    		printf ("Try again \n");
		}
		else if(n<num)
		{
			printf("%d is too small\n",n);
			printf ("Try again \n");
		}
		else 
		{
			printf("Correct answer in %d attempts",attempts);
		}
		attempts++;
	}while(num!=n);
}
