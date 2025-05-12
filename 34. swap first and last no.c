#include<stdio.h>
 main(){
       int i,a,last,first,middle,digit,count;
       
       
       printf("enter value:-");
       scanf("%d",&a); 
	   
	   last=a%10;
	   first=a;
	   middle=a;          
        
       while(first>=10){
       	first=first/10;
       	}

       	
		   digit=first;
		   first=last;
		   last=digit;
	   printf("first:-%d middle:-%d  last:-%d",first,middle,last);
	   
}