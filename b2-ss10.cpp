#include<stdio.h>

int main(){
	int arr[5] = {15,20,41,59,87};
	printf("Mang truoc khi sap xep : \n");
	for(int i = 0 ; i < 5 ; i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
	printf("Mang sau khi sap xep : \n");
	for(int i = 0 ; i < 5 - 1 ; i++){
		for(int j = 0 ; j < 5 - i - 1 ; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i = 0 ; i < 5 ; i++){
		printf("%d \t",arr[i]);
	}
	return 0;
}
