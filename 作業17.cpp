#include<stdio.h>
#include<stdlib.h>
#define Max 5
#define arr int num[Max]
#define number "%d %d %d %d %d"
#define x x1,x2,x3,x4,x5
#define scnum &x1,&x2,&x3,&x4,&x5
void get_min(int [Max]);
int main(void){
	int x;
	printf("請輸入5個數字");
	scanf(number,scnum);
    arr={x};
	get_min(num);	
}
void get_min(arr){
	int z;
	for(int i=0;i<Max;i++)
		for(int j=i+1;j<Max;j++){
			if(num[i]>num[j]){
				z=num[i];
				num[i]=num[j];
				num[j]=z;
			}
		} 
	printf("\n最小的數字為:");
	printf("%d",num[0]);
}
