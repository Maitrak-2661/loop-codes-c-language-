#include<stdio.h>

main(){
	int i=1,sum=0,a,f=0;
	while(i<=10){
	
	printf("enter value:-\n");
	scanf("%d",&a);
	if(a>0){
		printf("positive no:-%d\n",a);
		sum=sum+a;
	}else{
		printf("negative no:-%d\n,",a);
		f=f+a;
		
	}


	
	
	i++;
	
	
	}
	printf("the sum of positive numbers are:-%d\n",sum);
	printf("the sum of negative numbers are:-%d\n",f);
}