#include <stdio.h>

int main(){
	int arr[]={5,99,74,16,53,82,66};
	int i,j,min,tmp,s;
	int length=sizeof(arr)/sizeof(int);
	
	//algorithm
	for(i=0;i<length-1;i++){
		min=i;
		for(j=i+1;j<length;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		tmp=arr[min];
		arr[min]=arr[i];
		arr[i]=tmp;
	}
	
	for(s=0;s<length;s++){
		printf("%d\t",arr[s]);
	}
}
