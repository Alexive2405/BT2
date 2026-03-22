#include <bits/stdc++.h>
using namespace std;

int main(){;
    int N;
    ifstream fin ("InPascal.txt");
    ofstream fout ("OutPascal.txt");
    fin >> N;

    int **P = new int * [N+1];
    for ( int i = 0 ; i <= N ; i++){
        P[i] = new int[i + 1];
    }

    for (int i = 0; i <= N; i++){
        P[i][0] = 1;
        P[i][i] = 1;
        
        for (int j = 1; j < i; j++) {
            P[i][j] = P[i-1][j] + P[i-1][j-1];
        }
    }
    
    
    for (int i = 0; i < N+1; i++) {
        for (int j = 0; j <= i; j++) {
            fout << P[i][j] << " ";
        }
        fout << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
