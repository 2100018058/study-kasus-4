#include <iostream>
#include "input.h"
#include "proses.h"
#include "output.h"
#include <fstream>
using namespace std;

int main()
{
	Input x;
	x.input();
	x.oInput();
	
	Proses y;
	y.iProses();
	y.hitung();
	y.oProses();
	
	output z;
	z.getData();
	z.cetak();
}