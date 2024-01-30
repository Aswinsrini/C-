#include<stdio.h>
int Find(int n){
    while(n>=0){
        if(n%10 == 9){
            return 1;
        }
        n-=9;
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("The output is %s",Find(n)?"YES":"NO");
}