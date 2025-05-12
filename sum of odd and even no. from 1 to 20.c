#include<stdio.h>

int main(){
	int i=1,odd=0,even=0;
	
	while(i<=20){
		
		if(i%2==0){
			even=even+i;
		}else{
			odd=odd+i;
			
		}
		i++;
	}
	printf("sum of odd numbers:-%d\n",odd);
	printf("sum of even numbers:-%d\n",even);
	
}
	
	

	
	
	