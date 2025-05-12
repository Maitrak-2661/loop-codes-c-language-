#include<stdio.h>
 main(){
       int i,a,b,lcm,gcd;
       printf("enter value:-");
       scanf("%d",&a);
        printf("enter value:-");
        scanf("%d",&b);
                
		for(i=1;i<a;i++){
       	for(i=1;i<b;i++){
       		
       		if(a%i==0 && b%i==0){
       			gcd=i;
			   }
			   
		   }
		   lcm=a*b/gcd;
       	 printf("the lcm of the given number is:-%d",lcm);
       	 	
              
}
	   }