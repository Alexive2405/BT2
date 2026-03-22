#include <bits/stdc++.h>
using namespace std;

int UCLN( int a , int b ){
    while ( b != 0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int BCNN ( int a , int b ){
    return ( a*b ) / UCLN( a, b ); 
}


int main(){
    ifstream fin ("InUCBC.txt");
    ofstream fout ("OutUCBC.txt");
    int T = 3;
    int a , b; 
    while(T--){
        fin >> a >> b;
        fout << UCLN( a, b ) << " " << BCNN( a, b ) << endl;
    }
    fin.close();
    fout.close();
    return 0;
}