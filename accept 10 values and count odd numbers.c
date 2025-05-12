#include<stdio.h>

main(){
	int i=1,count=0,a;
	while(i<=10){
	
	printf("enter value:-\n");
	scanf("%d",&a);
	if(a%2==1){
		printf("odd no:-%d\n",a);
		count=count+1;
	}
	


	
	
	i++;
	
	
	}
	printf("count of odd no is:-%d",count);
}