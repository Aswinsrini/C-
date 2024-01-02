#include<iostream>
using namespace std;
int combine(int n,int r){
    if(r > n) return 0;
    if(r == 0 || n==r) return 1;
    int res = 1,div = 1;
    for(int i = 0;i<r;i++){
        res *= (n-i);
        div *=(i+1); 
    }
    return res/div;
}
int main(){
    int n , k;
    cout<<"The number number of persons : ";
    cin>>n;
    cout<<"The number of teams: ";
    cin>>k;
    cout<<"The combinations to form maximum friendship is  : "<<combine(n-k+1,2)<<endl;;//to Maximize the friendship in a teams
    //sum of minimum friendship
    int number  = (n/k),rem = 0;
    if(n%k != 0){
        number -=1;
        rem = k + n%k;
    }
    
    cout<<"The minimum friendship is : "<<number * combine(k,2) + combine(rem,2);

}