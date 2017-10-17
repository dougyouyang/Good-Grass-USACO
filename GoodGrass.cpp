/*

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org/>

*/


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
