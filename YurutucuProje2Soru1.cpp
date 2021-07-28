#include "Polinom.h"
#include <iostream> //cout ve cin kullanýmý için ekledim.
#include<locale.h> //Türkçe karaakter kullanýmý için ekledim.
using namespace std;

/*Sude Topal-180707075-Bilgisayar Mühendisliði-Nesneye Yönelik Programlama-BM-104-Bahar 2020-Gülþah Tümüklü Özyer */

int main() {	

	setlocale(LC_ALL,"Turkish"); //Türkçe karakterler için
	int A,B,C,x; //Deðiþken deklarasyonu
    Polinom p; //Polinom sýnýfýnýn yapýcýsý çaðýrýlýr.
    //x² ve x'in katsayýsý (A ve B) ve C sabitinin deðeri kullanýcýdan alýnýr.
	cout<<"A deðiþkenin deðeri için bir tamsayý giriniz:";
	cin>>A;
	cout<<"B deðiþkeninin deðeri için bir tamsayý giriniz:";
	cin>>B;
	cout<<"C deðiþkeninin deðeri için bir tamsayý giriniz:";
	cin>>C;
	p.KatsayilaraDegerAta(A,B,C);
	p.DegerHesapla(x);
	p.KokleriHesapla();
	   
	
	
	return 0;
}





