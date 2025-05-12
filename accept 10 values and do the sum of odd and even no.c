#include<stdio.h>

main(){
	int i=1,sum=0,a,count=0,f=0;
	while(i<=10){
	
	printf("enter value:-\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("even no:-%d\n",a);
		count=count+a;
	}else{
		printf("odd no:-%d\n,",a);
		f=f+a;
		
	}


	
	
	i++;
	
	
	}
	printf("the sum of even numbers are:-%d\n",count);
	printf("the sum of odd numbers are:-%d\n",f);
}