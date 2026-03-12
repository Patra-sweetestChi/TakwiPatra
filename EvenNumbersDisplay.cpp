#include <stdio.h>
int main(){
	int i;
	printf("Even numbers between 1 and 20;\n");
	
	for(i = 1; i<=20;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	return 0;
}