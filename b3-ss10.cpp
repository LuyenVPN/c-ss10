#include<stdio.h>

int main(){
	int arr[5] = {15,20,41,59,87};
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
	return 0;
}
