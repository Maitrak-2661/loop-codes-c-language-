#include<stdio.h>
 main(){
       int i,a,sum=0;
       
       
       printf("enter value:-");
       scanf("%d",&a);
       
       for(i=1;i<=a;i++){
       	
       	 if(a%i==0){
       	 	printf("%d\n",i);
       	 	sum = sum + i;
			}
	   }
	   printf("sum of all factor is:-%d",sum);
	   
	   

}