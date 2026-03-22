#include <bits/stdc++.h>
using namespace std; 

int main(){
    int N , K;
    ifstream fin ( "Incount.txt");
    ofstream fout ("OutCount.txt");

    fin >> N >> K;

    int *a = new int[N];
    int dem = 0;

    for ( int i =0 ; i < N ; i++ ){
        fin >> a[i];
        if ( a[i] <= K ){
            dem++;
        }
    }
    fout << dem;
    fin.close();
    fout.close();    
} 