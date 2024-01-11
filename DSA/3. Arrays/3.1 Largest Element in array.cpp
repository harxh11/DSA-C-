#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,3,5,6,2,11,8,8,1,10};
    int max;
    for(int i =0; i< 10; i++){
        if (arr[i] > max){
            max = arr[i];
        }   
    }
    cout<<max<<endl;
    
    return 0;
}