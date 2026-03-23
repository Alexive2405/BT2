#include <bits/stdc++.h>
using namespace std;

struct Sinhvien{
    string name;
    float * diem;
    static int soluong;
    float dtb;

    //constructor 
    Sinhvien(){
        name = "Nguyen Van A";
        diem = new float[2];
        soluong++;
    }
    //destructor
    ~Sinhvien(){
        delete[] diem;
        soluong--;
    }

    //operator 
    friend istream & operator >> ( istream & IN , Sinhvien& sv){
        IN >> sv.name;
        for ( int i = 0 ; i < 2 ; i++){
            IN >> sv.diem[i];
        }
        sv.dtb = sv.diem[0] * 0.4 + sv.diem[1] * 0.6;
        return IN;
    }


    friend ostream & operator << ( ostream & OUT , Sinhvien & sv ){
        OUT << sv.name << ": " << sv.dtb;
        return OUT; 
    }

};

int Sinhvien :: soluong = 0;

int main(){
    ifstream fin ("InDTB.txt");
    ofstream fout ("OutDTB.txt");
    Sinhvien * ds = new Sinhvien[3];
    for ( int i = 0 ; i < 3 ; i++ ){
        fin >> ds[i];
        fout << ds[i] << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
