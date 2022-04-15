#include <fstream>
using namespace std;

class Proses {
public:
  void iProses()
  {
  	
 	i = 1;
	getdata.open("input.txt");
	while (!getdata.eof()) 
	{
    if (i==13)
		  {
     		getdata >> pengeluaran;
    	}		 
		else 
		  {
    		i++;
   		}
	}
  	getdata.close();
 }

  void hitung()
 {
	pemasukan = 2000000;
	pemasukan *= 12;
	tabungan = pemasukan - pengeluaran;
 }
  void oProses()
 {
	outdata.open("proses.txt");
  	outdata<<tabungan;
  	outdata.close();
 }

private:
  int pengeluaran, tabungan, pemasukan, i;
  ifstream getdata;
  ofstream outdata;
};