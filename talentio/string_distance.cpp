#include<bits/stdc++.h>
using namespace std;
int main()
{
    //declaration
    string s,word1,word2,word;
    int minDistance = INT_MAX,w1_ind =-1,w2_ind=-1;
    vector<string>arr;

    //user input 
    getline(cin,s);
    cin>>word1>>word2;
    stringstream ss(s);
    while(ss >> word){
        arr.push_back(word);
    }

    //minimum distance between 2 words
    for(int i = 0;i<arr.size();i++){
        
        if(arr[i] == word1){
            w1_ind = i;
        }
        if(arr[i] == word2){
            w2_ind = i;
        }
        if(w1_ind != -1 && w2_ind != -1){
            minDistance = min(minDistance,abs(w1_ind-w2_ind));
        }
    }

    //expected output
    cout<<minDistance;
}