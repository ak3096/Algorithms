//Binary Search Algorithm
#include <iostream>
#include<vector>
using namespace std;

	int binarySearch(vector<int> &v,int min, int max, int target){

	while(min<=max){
	int guess = (int)(min+max)/2;
	
	if(target==v[guess]){
	    return guess;
	}else if(target>v[guess]){
	    min = guess+1;
	}else{
	    max = guess-1;
	}
  }
}

int main() {
	std::vector<int> v;
	int numbers = 0;
	int num = 0;
	
	cout<<"Enter the size:\n";
	cin>>numbers;
	
	for(int i=0;i<numbers;i++){
	    cin>>num;
	    v.push_back(num);
	}
	
	int min = 0;
	int max = numbers-1;
	int target = 0;
	int guess = 0;
	
	cout<<"Enter the number to be searched:\n";
	cin>>target;
    int loc = binarySearch(v, min, max, target);
	
	cout<<"Location of "<<target<<": "<<loc+1;

	return 0;
}
