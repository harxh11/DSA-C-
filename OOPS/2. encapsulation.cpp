#include <bits/stdc++.h>
using namespace std;

class YouTubeChannel{
    private:
        string Name;
        int SubsCount = 0;
        vector<string> Videos = {};
    
    public:
        YouTubeChannel(string name, int sub){
            Name = name;
            SubsCount = sub;
        }

        void AddVideo(string vidName){
            Videos.push_back(vidName);
        }

        void Subscribe(){
            SubsCount++;
        }
        void Unsubscribe(){
            if(SubsCount > 0){
                SubsCount--;
            }
        }
        
        int Subs(){
            return SubsCount;
        }
        void VidCount(){
            cout<<"Total Number of Videos: "<<Videos.size()<<endl; 
        }
};  


int main(){
    YouTubeChannel* yt1 = new YouTubeChannel("Harsh Jagtap", 1000);
    yt1->AddVideo("OOPS in C++");
    yt1->AddVideo("Data Structures in Python");
    yt1->AddVideo("Data Management Systems");
    yt1->Subscribe();
    yt1->Subscribe();
    int s = yt1->Subs();
    yt1->VidCount();
    cout<<s<<endl;
    return 0;
}