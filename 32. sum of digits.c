#include<stdio.h>
 main(){
       int i,a,digit,sum=0;
       
       
       printf("enter value:-");
       scanf("%d",&a);           
        
       while(a>0){
       	digit=a%10;
       	
       		sum=sum+digit;
       		a=a/10;
		   
		   
		   }
	   printf("sum:-%d",sum);
}