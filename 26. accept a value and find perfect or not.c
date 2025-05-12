#include<stdio.h>
 main(){
       int i,a,fact=0;
       
       
       printf("enter value:-");
       scanf("%d",&a);
       
       for(i=1;i<a;i++){
       	
       	 if(a%i==0){
       	 	printf("%d\n",i);
       	 	fact=fact+i;
			}
				
			}
			if(fact==a){
				printf("it is perfect ");
			}else{
				printf("it is not perfect");
			}
		
	   }
	   
	   