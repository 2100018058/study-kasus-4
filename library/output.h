#include <string>
#include <fstream>
using namespace std;

class output{
public:
  void cetak(){
    cout<<"\nData Pengeluaran tiap Bulan\n";
    cout<<"Bulan ke-1 "<<data_file[0]<<endl;
    cout<<"Bulan ke-2 "<<data_file[1]<<endl;
    cout<<"Bulan ke-3 "<<data_file[2]<<endl;
    cout<<"Bulan ke-4 "<<data_file[3]<<endl;
    cout<<"Bulan ke-5 "<<data_file[4]<<endl;
    cout<<"Bulan ke-6 "<<data_file[5]<<endl;
    cout<<"Bulan ke-7 "<<data_file[6]<<endl;
    cout<<"Bulan ke-8 "<<data_file[7]<<endl;
    cout<<"Bulan ke-9 "<<data_file[8]<<endl;
    cout<<"Bulan ke-10 "<<data_file[9]<<endl;
    cout<<"Bulan ke-11 "<<data_file[10]<<endl;
    cout<<"Bulan ke-12 "<<data_file[11]<<endl;
    cout << "Total Pengeluaran : "<<"Rp. "<<data_file[12]<<endl;
    cout << "Jumlah Tabungan : "<< "Rp."<<tabungan;
  }

  void getData(){
    ambil_data.open("input.txt");
    while (!ambil_data.eof()){
      ambil_data>>data_file[index];
      index +=1;
    }
    ambil_data.close();

    ambil_data.open("proses.txt");
    while(!ambil_data.eof()){
      ambil_data>>tabungan;
    }
  }

private:
  fstream ambil_data;
  fstream ambil_total;
  string data_file[30];
  string pengeluaran,tabungan;
  int index = 0;
};