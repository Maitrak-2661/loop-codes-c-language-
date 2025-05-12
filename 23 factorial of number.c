#include<stdio.h>
 main(){
       int i,a,fact=0,j=1,mul;
       
       
       printf("enter value:-\n");
       scanf("%d",&a);
       
       for(i=1;i<=a;i++){
       	
       	 mul= j * a;
       	 
       	 fact = fact + mul;
       	 j++;

	   }
	   printf("fact of number is:-%d",fact);
	   

}