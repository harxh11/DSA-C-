#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> vec;
    unordered_map<int, int> m;
    
    
    int n = 5;
    
    for(int i =0; i< n; i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    
    
    int max = 0;
    int min = 1;
    for (int i = 0; i < n; i++){
        m[vec[i]]++;
    }
    
    for(int i=0; i<n; i++){
        if(m[vec[i]] > max){
            max = m[vec[i]];
        }
        
        if (m[vec[i]] < min){
            min = m[vec[i]];
        }
        
        cout<<"The element is: "<<vec[i]<<" and the frequency is: "<<m[vec[i]]<<endl;
    }
    
    
    cout<<"The maximum frequency in the whole array is: "<<min<<endl;
    
    return 0;
}