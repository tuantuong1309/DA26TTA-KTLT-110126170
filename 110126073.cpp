#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a,b;
	printf("nhap vao so nguyen a = ");
	scanf("%d",&a);
	printf("nhap vao so nguyen b = ");
	scanf("%d",&b);
	int tong=0,hieu=0,tich=1;
	float thuong=1;
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	thuong=a/b;
 
 	printf("\ntong %d + %d = %d ",a,b,tong);
 	printf("\nhieu %d - %d = %d ",a,b,hieu);
 	printf("\ntich %d x %d = %d ",a,b,tich);
 	printf("\nthuong %d / %d = %2.f ",a,b,thuong);
	return 0;
}