//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;
int nr, nc, mat[105][105];
int r, c, lar=0;

void squr(int sr, int sc)
{
    int i, j, sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum+=mat[sr][sc++];
        }
        sc-=3, sr++;
    }
    if(sum>lar){
        r=sr-3, c=sc, lar=sum;
    }
    return;
}

int main()
{
    int i, j;
    
    cin >> nr >> nc;
    for(i=0;i<nr;i++){
        for(j=0;j<nc;j++){
            cin >> mat[i][j];
        }
    }
    
    for(i=0;i<=nr-3;i++){
        for(j=0;j<=nc-3;j++){
            squr(i, j);
        }
    }
    
    cout << lar << endl;
    cout << r+1 << " " << c+1 << endl;
    
    return 0;
}
