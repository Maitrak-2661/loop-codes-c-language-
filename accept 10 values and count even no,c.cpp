#include<stdio.h>

main(){
	int i=1,sum=0,a,count=0;
	while(i<=10){
	
	printf("enter value:-\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("even no:-%d\n",a);
		count=count+1;
	}


	
	
	i++;
	
	
	}
	printf("the count of even numbers are:-%d",count);
}