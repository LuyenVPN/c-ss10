#include<stdio.h>

int main(){
	int arr[5] = {15,20,41,59,87};
	int so;
	int found = 0;
	printf("Nhap vao gia tri muon tim : ");
	scanf("%d",&so);
	for(int i = 0 ; i < 5 ; i++){
		if(arr[i] == so){
			found = 1;
			printf("Gia tri can tim o vi tri %d \n",i+1);
		}
	}
	if(!found){
		printf("Khong co gia tri can tim trong mang");
	}
}
