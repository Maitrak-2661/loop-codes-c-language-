#include<stdio.h>
main(){
	
	int num,digit,count=0,sum=0,originalnum,temp;
	
	printf("enter the number:");
	scanf("%d",&num);
	temp=num;
	originalnum=num;
	
	 while(temp!=0){
	 count=count+1;
		   
		   temp=temp/10;
		   }
		   
		   while(num!=0){
		   	digit=num%10;
		   	sum=sum+pow(digit,count);
		   	num=num/10;
		   }
		   if(sum==originalnum){
		   	printf("it is armstrong\n");
		
		   }else{
		   	printf("not armstrong");
		   }
	
}

		
		   
		   