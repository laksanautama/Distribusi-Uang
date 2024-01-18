#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

//----kode di atas batas ini tidak boleh diganti atau ditambah tambah----

bool distribusi_uang(map<int, int>& distribusi, int uang_tersedia){
    int n = distribusi.size();
    int min_uang = 1000000;
    int max_uang = 4000000;

    if(uang_tersedia % n != 0)
        return false;

    int rupiah_per_karyawan = uang_tersedia / n;

    if(rupiah_per_karyawan < min_uang || rupiah_per_karyawan > max_uang)
        return false;

    for(int i = 0; i < n; i++){
    distribusi[i] = rupiah_per_karyawan;
    }

    return true;
}

void tampil_jml_karyawan(int n_karyawan){
    map<int, int> distribusi;
    int uang_tersedia = 8000000;

    for(int i = 0; i < n_karyawan; i++){
    distribusi[i] = 0;
    }

    if(distribusi_uang(distribusi, uang_tersedia)){
        cout << "Jumlah karyawan yang memperoleh uang sebanyak Rp. 8.000.000 adalah " << distribusi.size() << endl;
    }
    else{
        cout << "Tidak Diketahui" << endl;
    }
}
