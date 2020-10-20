#include<iostream>
#include<vector>
using namespace std;

int main(){
	int temp,size;
	int data[]={32,-71,12,45,26};
	
	size=sizeof(data)/sizeof(int);
	
	for(int j = 0;j<size;++j)
		for(int i=0;i<size-1;++i){
			
			if(data[i+1]<data[i]) {
				
				temp=data[i+1];
				data[i+1]=data[i];
				data[i]=temp;
				
			}
			
		}
		
	for(int i=0;i<size;++i){
		
		cout<<data[i]<<" ";
		
	}
	

	
	return 0;
}
