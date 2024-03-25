#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int intro,extro,uni;
        cin >> intro >> extro >> uni;
        long long minimum_camp = intro;
        minimum_camp += (extro)/3;
        extro %= 3;
        if(extro == 2 and uni >=1){
            minimum_camp++;
            uni--;
        }
        else if(extro == 1 and uni >=2){
            minimum_camp++;
            uni-=2;
        }
        else if(extro != 0){
            cout << -1 <<endl;
            continue;
        }
        minimum_camp += (uni/3);
        uni %=3;
        if(uni !=0) minimum_camp++;
        cout << minimum_camp<<endl;
    }
}