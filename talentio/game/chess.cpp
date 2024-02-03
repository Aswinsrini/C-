#include<bits/stdc++.h>
using namespace std;
class Chess{
    public:
    vector<vector<string>>board={{"br","bk","bb","bq","bk","bb","bk","br"}};
    Chess(){
        insertBoardElements("bp",1);
        insertBoardElements(" ",4);
        insertBoardElements("wp",1);
        board.push_back({"white_rook","white_knight","white_bishop","white_king","white_queen","white_bishop","white_knight","white_rook"});
    }
    void insertBoardElements(string ele,int timesToFill){
        vector<string>temp;
        for(int j = 0;j<=timesToFill;j++){
            for(int i = 0;i<8;i++){
                temp.push_back(ele);
            }
        }
        board.push_back(temp);
    }
    void displayInitialBoardState(){
        for(int i = 0;i<8;i++){
            for(int j = 0;j<8;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Chess c;
    c.displayInitialBoardState();
}