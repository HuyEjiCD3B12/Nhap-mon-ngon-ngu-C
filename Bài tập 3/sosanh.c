#include <stdio.h>;

int main(){
	int a , b;
	printf ("nhap a =");
	scanf ("%d", &a);
	printf ("nhap b =");
	scanf("%d", &b);
	if (a >= b){
		printf(" a < b", a ,b );
	}else if (a == b){
		printf("a = b", a , b);
	}else{
		printf("a > b", a, b);
	}
getchar();
return 0;	
}
