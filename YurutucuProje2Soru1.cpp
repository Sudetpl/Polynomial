#include "Polinom.h"
#include <iostream> //cout ve cin kullan�m� i�in ekledim.
#include<locale.h> //T�rk�e karaakter kullan�m� i�in ekledim.
using namespace std;

/*Sude Topal-180707075-Bilgisayar M�hendisli�i-Nesneye Y�nelik Programlama-BM-104-Bahar 2020-G�l�ah T�m�kl� �zyer */

int main() {	

	setlocale(LC_ALL,"Turkish"); //T�rk�e karakterler i�in
	int A,B,C,x; //De�i�ken deklarasyonu
    Polinom p; //Polinom s�n�f�n�n yap�c�s� �a��r�l�r.
    //x� ve x'in katsay�s� (A ve B) ve C sabitinin de�eri kullan�c�dan al�n�r.
	cout<<"A de�i�kenin de�eri i�in bir tamsay� giriniz:";
	cin>>A;
	cout<<"B de�i�keninin de�eri i�in bir tamsay� giriniz:";
	cin>>B;
	cout<<"C de�i�keninin de�eri i�in bir tamsay� giriniz:";
	cin>>C;
	p.KatsayilaraDegerAta(A,B,C);
	p.DegerHesapla(x);
	p.KokleriHesapla();
	   
	
	
	return 0;
}





