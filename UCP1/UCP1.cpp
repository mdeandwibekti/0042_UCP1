#include <iostream>
using namespace std;


int sensorA, sensorB, sensorC;
string nama;

void input()
{
	cout << "masukan nama kota : ";
	cin >> nama;
	cout << "masukan hasil sensor 1 : ";
	cin >> sensorA;
	cout << "masukan hasil sensor 2 : ";
	cin >> sensorB;
	cout << "masukan hasil sensor 3 : ";
	cin >> sensorC;
}

void display()
{
	int penjumlahan = sensorA + sensorB + sensorC;
	float pembagian = penjumlahan / 3.0;
	cout << "Nama Kota = " << nama << endl;
	cout << "Hasil kualitas udara berdasarkan sensor = " << pembagian << endl;

	if (pembagian >= 75)
	{
		cout << "Kualitas udara : Sehat" << endl;
	}
	else if (pembagian < 75 || sensorA == 45 || sensorB == 45 || sensorC == 45)
	{
		cout << "Kualitas udara : Tidak Sehat" << endl;
	}
}

int main() 
{
	char pilihan;
	do 
	{ 
		input();
		display();

		cout << "Apakah anda ingin mengulangi (y/n) ?";
		cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');

	return 0;
}

	







//  
//	   
// 
// 2.prosedur void sapaan(){
//					cout << "halo teman teman";
//					}
// 
//					int main() {
//						sapaan();
//						return 0;
//						}
//		
//  fungsi int 
//  
// 
//
//
//
//
//
//
//3.1.FOR 
//	SINTAX = for (kondisi awal, kondisi akhir,pengubah kondisi)
//	    {
//	         Proses yang diulang
//	    }
//
//  2. WHILE
//	SINTAX = while (kondisi)
//          {
//              Proses yang diulang
//          }
//
//  3. DO..WHILE
//	SINTAX : do
//	    	  {
//		         Proses yang diulang
//		      } while (kondisi)
//
// 4. if (nim)
//		{
//			cout <<"NIM sudah tersedia" << endl;
// 
// 5
//
//
//
//
//
//
//
