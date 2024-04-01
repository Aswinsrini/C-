#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
void compute_candies(vector<ll>&arr,int n){
    ll alice = 0,bob = 0,moves = 0, alice_eat= 0, bob_eat=0;
    int left = 0, right = n-1;
    bool isAlice = true;

    while(left <= right){
        while(isAlice and bob_eat >= alice_eat and left <= right){
            alice_eat += arr[left++];
        }
        if(isAlice) {
            alice += alice_eat, bob_eat = 0;
        }
        while(!isAlice and alice_eat >= bob_eat and left <= right){
            bob_eat += arr[right--];
        }
        if(!isAlice){
            bob += bob_eat,alice_eat = 0;
        }
        isAlice = !isAlice;
        moves++;
    }
    cout << moves <<" "<< alice <<" "<<bob<<endl;
}
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n;
        cin >> n;
        vector<ll>arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        compute_candies(arr,n);
    }
}