#include <stdio.h>

int main(){
	int arr[]={5,99,74,16,53,82,66};
	int i,j,tmp,s;
	int length=sizeof(arr)/sizeof(int);
	
	//algorithm
	for(i=1;i<length;i++){
		for(j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				tmp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tmp;
			}
		}
	}
	
	for(s=0;s<length;s++){
		printf("%d\t",arr[s]);
	}
	
}


