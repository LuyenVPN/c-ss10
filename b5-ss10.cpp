#include<stdio.h>

int main(){
	int arr[6] = {15,20,41,59,87};
	printf("Mang truoc khi sap xep : \n");
	for(int i = 0 ; i < 5 ; i++){
		printf("%d \t",arr[i]);
	}
	for(int i = 1 ; i < 5 ; i++){
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j - 1; 
		}
		arr[j+1] = key;
	}
	printf("\n");
	printf("Mang sau khi sap xep : \n");
	for(int i = 0 ; i < 5 ; i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
	int vitri;
	printf("Nhap gia tri muon tim : ");
	scanf("%d",&vitri);
	int m = 0 ; 
	int n = 5 - 1;
	int found = 0;
	while(m <= n){
		int l = (m + n) / 2;
		if(arr[l] == vitri){
			printf("Gia tri can tim nam o cac vi tri : ");
			int i = m;
			while(i >= 0 && arr[i] == vitri){
				printf("%d \t",i);
				i--;
			};
			i = m + 1;
			while(i < 5 && arr[i] == vitri){
				printf("%d \t",i);
				i++;
			};
			printf("\n");
			found = 1;
			break;
		}else if(arr[l] < vitri){
			m = l + 1;
		}else{
			n = l - 1;
		}
	}
	if(!found){
		printf("Khong co gia tri can tim trong mang");
	}
	return 0;
}
