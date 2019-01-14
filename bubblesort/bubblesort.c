#include <stdio.h>

int main(){
	int arr[]={5,99,74,16,53,82,66};
	int i,j,tmp;
	int length=sizeof(arr)/sizeof(int);
	
	for(i=length;i>1;--i){
		for(j=0;j<i;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	
	
	int s;
	for(s=0;s<length;s++){
		printf("%d\t",arr[s]);
	}
}
