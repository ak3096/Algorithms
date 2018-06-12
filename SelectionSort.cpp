//Selection Sort
#include <iostream>
using namespace std;

// Swap function
void swap(int array[], int startIndex, int index ){
    int temp = array[startIndex];
    array[startIndex]=array[index];
    array[index]=temp;
}

int main() {
	int array[]={5,2,3,6,7,1};
	int size = sizeof(array)/sizeof(array[0]);
	int minValue;
	int minIndex;
	
	for(int i=0;i<size;i++){
	    minValue=array[i];
	    minIndex=i;
	    for(int j=i+1;j<size;j++){
	        if(array[j] < minValue){
	            minValue = array[j];
	            minIndex = j;
	        }
	    }
	    swap(array,i,minIndex);
	}
	for(int k=0;k<size;k++){
	    cout<<array[k]<<" ";
	}
	
	return 0;
}
