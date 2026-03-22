#include <bits/stdc++.h>
using namespace std;

#define max 100


bool lon( int a[max][max] , int i , int j , int n , int m ){
    int v = a[i][j];
    //các giá trị lân cận 
    int di[]= { -1 , -1 , -1 , 0 , 0  , 1 , 1 , 1};
    int dj[]= { -1 , 0 , 1 , -1 , 1 , -1 , 0 , 1};

    for ( int k = 0 ; k < 8 ; k++ ){
        int ni = i + di[k];
        int nj = j + dj[k];
        if ( ni >= 0 && ni < n && nj >=0 && nj < m ){
            if ( v <= a[ni][nj] ){
                return false;
            }
        }
    }
    return true;
} 

int main(){
    ifstream fin ("InMaxCount.txt");
    ofstream fout ("OutMaxCount.txt");
    int N , M;
    int dem = 0;
    fin >> N >> M;

    int a[max][max];

    for ( int i = 0 ; i < N ; i++){
        for ( int j = 0 ; j < M; j++){
            fin >> a[i][j];
        }
    }


    for ( int i = 0 ; i < N ; i++){
        for ( int j = 0 ; j < M; j++){
            if ( lon( a , i , j , N , M ) ){
                dem++;
            }
        }
    }

    fout << dem;
    fin.close();
    fout.close();
}