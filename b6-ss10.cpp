#include<stdio.h>

int main(){
	int arr[5] = {15,20,41,59,87};
	int vitri;
	int index[100] , count = 0 ;
	printf("Nhap gia tri muon tim : ");
	scanf("%d",&vitri);
	for(int i = 0 ; i < 5 ; i++){
		if(vitri == arr[i]){
			index[count] = i;
			count++;
		}
	}
	if(count > 0){
		printf("Gia tri can tim na o vi tri : ");
		for(int i = 0 ; i < count ; i++){
			printf("%d ",index[i]);
		}
	}else{
		printf("Gia tri can tim khong nam o trong mang");
	}
	return 0;
}
