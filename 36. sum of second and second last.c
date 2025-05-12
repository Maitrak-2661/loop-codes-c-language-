#include<stdio.h>
 main(){
       int i,a,last_second,num,sum,second,count,num2,temp,temp1;
       
    
       printf("enter value:-");
       scanf("%d",&a); 
	   
	    temp=a;
	    temp1=a;
		       while(a>0){
       	
       	
       		count=count+1;
		   
		   a=a/10;
		   }
         for(i=0;i<2;i++){
        num=temp%10;
       	temp=temp/10;
       	}
       	printf("%d\n",num);
       	
       	 
		  
       	for(i=count;i>=2;i--){
       	
       	num2=temp1%10;
       	temp1=temp1/10;
       	}
       	sum=num2+num;

       	printf("sum:%d",sum);
}