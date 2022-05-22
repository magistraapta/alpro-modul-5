#include <iostream>
#include <iomanip>
using namespace std;
void tambahData();
void displayData();
void caridata(int input);
int datamhs = 0;
char pilih;
struct perpus{
    string judul[100][100];
    string id[100][100];
     string genre[2][14]={{"T4","H1","K9","F7","R3","L0","A2","H3","S7","D1","XX"},
                        {"Thriller","Horror","Komedi","Fantasi","Romantis","Ilmiah","Petualang","Sejarah","Sastra","Dokumentasi","Kosong"}};
    string jenis[2][14]={{"NV","KM","EN","DO","BI","KS","XX"},
                        {"Novel","Komik","Ensiklopedia","Dongeng","Biografi","Kamus","Kosong"}};
    string penulis[2][14]={{"FD","FI","NA","SM","KD","XX"},
                        {"Firdaus","Fajar Islam","Nadya A.","Surgi Mukti","Kasandi","Kosong"}};
    string penerbit[2][14]={{"AN","GR","ER","DE","XX"},
                        {"ANDI","GRAMEDIA","ERLANGGA","DEEPUBLIS","Kosong"}};
    string tahun[2][14]={{"11","12","13","14","15","16","17","18","19","20","21","22","28","XX"},
                        {"MMXI","MMXII","MMXIII","MMXIV","MMXV","MMXVI","MMXVII","MMXVIII","MMXIX","MMXX","MMXXI","MMXXII","MMXXVIII","Kosong"}};
}buku;

struct mahasiswa {
    string nama[100];
    string nim[100];
    string ttl[100];
}mhs;

void menu(){
    int input2;
    utama2:
        cout<<"=== MENU PROGRAM ==="<<endl;
        cout<<"1. Tambah Data"<<endl;
        cout<<"2. Data Mahasiswa meminjam buku"<<endl;
        cout<<"3. Cek Data"<<endl;
        cout<<"4. Cetak Kartu"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Pilih : "; cin>>input2;
        switch (input2){
        case 1:
            tambahData();
            goto utama2;
            break;
        case 2:
            displayData();
            goto utama2;
            break;
        case 3:
            caridata(input2);
            goto utama2;
            break;
        case 4:
            caridata(input2);
            goto utama2;
            break;
        case 5:
            cout<<"Sampai Jumpa :)"<<endl;            
            break;
        }
}

void tambahData(){
    datamhs++; int j = 0;
    cout << "Mahasiswa ke-" << datamhs << endl;
    cout << "Nama Mahasiswa: "; getline(cin,mhs.nama[datamhs-1]);
    if ((datamhs==datamhs)){
        getline(cin,mhs.nama[datamhs-1]);
    }
    cout <<"NIM: ";cin>>mhs.nim[datamhs-1];
    cout << "Tanggal lahir: "; cin >> mhs.ttl[datamhs-1];
    awal:
    cout <<"Buku ke-"<< j+1 << endl;
    cout <<"Judul Buku: ";
    if((datamhs==datamhs)){
        getline(cin,buku.judul[datamhs-1][j]);
    }
    getline(cin,buku.judul[datamhs-1][j]);
    cout <<"id Buku: "; cin>> buku.id[datamhs-1][j];
    cout << "Tambah buku lagi? (y/n)"; cin>>pilih; j++;
    if (pilih == 'y')
    {
        goto awal;
    } else {
        menu();
    }
    menu();
}

void displayData(){
    cout << "==== Mahasiswa yang meminjam buku ======" << endl;
    for (int i = 0; i < datamhs; i++)
    {
        cout << i+1 <<". "<<mhs.nama[i] << endl;
        for (int j = 0; j < 100; j++)
        {
            buku.judul[i][j];
            if (buku.judul[i][j] != "")
            {
                cout << "===>" << buku.judul[i][j] << endl;
            }
        }
    }
}

int umur (string tgl){
   string hari; hari += tgl[0]; hari+= tgl[1];
        int hari1 = stoi(hari);
        string bulan; bulan += tgl[3];bulan+=tgl[4];
        int bulan1 = stoi(bulan);
        string tahun; tahun += tgl[6];tahun+=tgl[7];tahun+=tgl[8];tahun+=tgl[9];
        int tahun1 = stoi(tahun);
        int hari2=20; int bulan2=05; int tahun2=2022;
        int tahun3=0;
        if ((tahun2>tahun1)&&(hari2>=hari1)&&(bulan2>=bulan1)){
            tahun3=tahun2-tahun1;
        }else if ((tahun2>tahun1)&&(hari1>=hari2)&&(bulan1>=bulan2)){
            tahun3=(tahun2-tahun1)-1;
        }else if ((tahun2>tahun1)&&(hari2>=hari1)&&(bulan1>=bulan2)){
            tahun3=(tahun2-tahun1)-1;
        }else if ((tahun2>tahun1)&&(hari1>=hari2)&&(bulan2>=bulan1)){
            tahun3=tahun2-tahun1;
        }
        return tahun3; 
}

void caridata(int input){
    string carinama;
    cout<<"Input Nama : ";
    if (datamhs==datamhs){
        getline(cin,carinama);
    }
    getline(cin,carinama);
    for (int i = 0; i < 100; i++){
        int a=mhs.nama[i].length();
        int cek = mhs.nama[i].find(carinama);
        string simpantanggal = mhs.ttl[i];
        if (input==3){
            
                if (cek!=(-1)){
                    cout<<"Data "<<carinama<<" Ditemukan : "<<endl;
                    cout<<"Nama\t: "<<mhs.nama[i]<<endl;
                    cout<<"NIM\t: "<<mhs.nim[i]<<endl;
                    cout<<"TTL\t: "<<mhs.ttl[i]<<endl;
                    cout<<"Umur\t: "<<umur(simpantanggal)<<endl;
                }  
        }
        else if (input==4){
            
                if (cek!=(-1)){
                    cout<<"                                    PERPUSTAKAAN TEKNIK"<<endl;
                    cout<<"                                    UNIVERSITAS MATARAM"<<endl;
                    cout<<"                              Jln. Majapahit No. 62 Mataram"<<endl;
                    cout<<"==================================================================================================="<<endl;
                    cout<<"Nama : "<<mhs.nama[i]<<setiosflags(ios::right)<<setw(82-a)<<"TTL  : "<<mhs.ttl[i]<<endl;
                    cout<<"NIM  : "<<mhs.nim[i]<<"\t\t\t\t\t\t\t\t  Umur : "<<umur(simpantanggal)<<endl;
                    cout<<"..................................................................................................."<<endl;
                    cout<<"|No.|          Judul         |    Genre    |  Jenis Buku  |   Penulis   | Penerbit | Tahun Terbit |"<<endl;
                    cout<<"..................................................................................................."<<endl;
                    for (int f = 0; f < 100; f++){
                        string genre = "" ; genre += (buku.id[i][f])[0];genre += (buku.id[i][f])[1];
                        string jenis = ""; jenis += (buku.id[i][f])[2];jenis += (buku.id[i][f])[3];
                        string penulis = ""; penulis += (buku.id[i][f])[4];penulis += (buku.id[i][f])[5];
                        string terbit = ""; terbit += (buku.id[i][f])[6];terbit += (buku.id[i][f])[7];
                        string year = ""; year += (buku.id[i][f])[8];year += (buku.id[i][f])[9];
                        for (int g = 0; g < 14; g++){
                            if (genre==buku.genre[0][g]){
                                genre = buku.genre[1][g];
                            }
                            if (jenis==buku.jenis[0][g]){
                                jenis = buku.jenis[1][g];
                            }
                            if (penulis==buku.penulis[0][g]){
                                penulis = buku.penulis[1][g];
                            }
                            if (terbit==buku.penerbit[0][g]){
                                terbit = buku.penerbit[1][g];
                            }
                            if (year==buku.tahun[0][g]){
                                year = buku.tahun[1][g];
                            }   
                        }
                        if (buku.judul[i][f]!=""){
                            cout<<"| "<<f+1<<" | "<<setiosflags(ios::right)<<setw(22)<<buku.judul[i][f];cout<<" | "<<setiosflags(ios::right)<<setw(11)<<genre;
                            cout<<" | "<<setiosflags(ios::right)<<setw(12)<<jenis;cout<<" | "<<setiosflags(ios::right)<<setw(11)<<penulis;
                            cout<<" | "<<setiosflags(ios::right)<<setw(8)<<terbit;cout<<" | "<<setiosflags(ios::right)<<setw(12)<<year<<" | ";
                            cout<<"\n..................................................................................................."<<endl;
                        }
                    }
                    cout<<endl<<setw(32)<<"Petugas Perpustakaan"<<setw(61)<<"Kepala Penanggung Jawab\n\n\n\n\n";
                    cout<<setw(34)<<"Nuzhairil Arsanurrahman"<<setw(53)<<"Shafa Asyari Ramadhan"<<endl<<endl;   
                }      
        }
    }
    
}

int main()
{
    menu();
    return 0;
}
