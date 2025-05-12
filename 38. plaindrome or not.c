#include<stdio.h>
 main(){
       int i,a,rem,rev=0,temp;
       
       
       printf("enter value:-");
       scanf("%d",&a);
	   temp=a;           
        
       while(temp>0){
	   rem=temp%10;
	   rev=(rev*10)+rem;
	   temp=temp/10;
       	}
       	temp=a;
		  if(rev==temp){
		  printf("it is palindrome\n");
	}else{
		printf("it is not palindrome\n");
	}
	  
}