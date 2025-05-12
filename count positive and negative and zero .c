#include<stdio.h>

main(){
	int i=1,sum=0,a,count=0,f=0,g=0;
	while(i<=10){
	
	printf("enter value:-\n");
	scanf("%d",&a);
	if(a>0){
		count=count+1;
	}else if(a<0){
		f=f+1;
	}else{
		g=g+1;
	}
	


	
	
	i++;
	
	
	}
	printf("total count of positive no. is:-%d\n",count);
	printf("total count of negative no. is:-%d\n",f);
	printf("total count of  zero is:-%d\n",g);
}