#include<stdio.h>
 main(){
       int i,a,rem,rev=0;
       
       
       printf("enter value:-");
       scanf("%d",&a);           
        
       while(a>0){
	   rem=a%10;
	   rev=(rev*10)+rem;
	   a=a/10;
       	
       		
		   
		   }
	   printf("reverse:%d",rev);
}