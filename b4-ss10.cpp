#include<stdio.h>

int main(){
	int arr[5] = {15,20,41,59,87};
	printf("Mang truoc khi sap xep : \n");
	for(int i = 0 ; i < 5 ; i++){
		printf("%d \t",arr[i]);
	}
	for(int i = 0 ; i < 5 - 1 ; i++){
		int minIndex = i;
		for(int j = i + 1 ; j < 5 ; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		int temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
	printf("\n");
	printf("Mang sau khi sap xep : \n");
	for(int i = 0 ; i < 5 ; i++){
		printf("%d \t",arr[i]);
	}
	return 0;
}
