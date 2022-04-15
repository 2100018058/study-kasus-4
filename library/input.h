#include <fstream>
using namespace std;
class Input
{
  public:
  	
    void input()	
	{
	  	total = 0;
	  	for(int i=0;i<12;i++)   
	  	{
	    	cout<<"Masukkan pengeluaran bulan ke-"<<i+1<< " : ";cin>>bulan[i];
	    	total+=bulan[i];
	  	}
	}    	
    void oInput()
    {
		ofstream print;
		print.open("input.txt");
		for(int i=0;i<12;i++)
		{
		    print<<bulan[i]<<endl;
		}
		print<<total;
		print.close();
	}
    
  private:
    int bulan[12],total,pemasukan,pengeluaran,tabungan;
};
