//Insertion Sort
#include <iostream>
using namespace std;

int main() {
	
	int array[]={2,1,7,4,3};
	int size=sizeof(array)/sizeof(array[0]);
	int key;
	int j;
	for(int i=1;i<size;i++){
	    key=array[i];
	    j=i-1;
	    while(j>=0 && array[j]>key){
	        array[j+1]=array[j];
	        j=j-1;
	    }
	    array[j+1]=key;
	}
	
	for(int k=0;k<size;k++){
	    cout<<array[k]<<" ";
	}
	return 0;
}
