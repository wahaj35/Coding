#include<iostream>
using namespace std;
int main(){
int arr[] = {11,12,5,13,6};
int i = 0;
int j = i;
cout<<"a";
while(i<=4){
	int pre;
	int a = arr[i];
	cout<<"h";
	while(j<=4){
		if(arr[j]<a){
		    pre = a;
			a  = arr[j];
			j++;
		}
	}
	arr[i] = a;
	arr[j] = pre;
	i++;
}
for(int i = 0; i<=4;i++){
	cout<<arr[i]<<"  ";
}

	return 0;
}