#include<stdio.h>
 main(){
       int i,a,last_second,num,sum,first;
       
       
       printf("enter value:-");
       scanf("%d",&a); 
	   
	    last_second=a;       
         for(i=0;i<2;i++){
        num=last_second%10;
       	last_second=last_second/10;
       	}
       	first=a;
       	while(first>=10){
       	first=first/10;
       	}
       	sum=first+num;

       	printf("sum:-%d",sum);
}