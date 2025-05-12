#include<stdio.h>
 main(){
       int i=2,a,b,prime;
       
       
       printf("enter value:-");
       scanf("%d",&a);           
        
       while(i<a){
       	if(a%i!=0){
       		break;
       		i++;
		   }
	   }if(a==i){
	   	printf("prime number");
	   	}else if(a!=i){
	   		printf("not prime");
		   }
      
	   }
       