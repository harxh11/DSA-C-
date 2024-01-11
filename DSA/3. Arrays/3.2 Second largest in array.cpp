#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,3,5,16,2,12,81,81,1,10};
    int max = 0;
    int max2 = 0;
    for(int i =0; i< 10; i++){
        if (arr[i] > max2 and arr[i] > max){
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2 and arr[i] < max){
            max2 = arr[i];
        }
        else {
            continue;
        }
    }
    cout<<max2<<endl;
    
    return 0;
}


//------------------ DONE -------------------