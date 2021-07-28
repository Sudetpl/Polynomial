#include "Polinom.h"
#include <iostream> //cout ve cin kullan�m� i�in ekledim.
#include <cmath> //sqrt fonksiyonunu kullanabilmek i�in ekledim.
using namespace std;

//Fonksiyonlar� �a��rarak hesaplamalar� yapt�m.
void Polinom::KatsayilaraDegerAta(int A,int B,int C)
{
	//Katsay�lara de�er atad�m.
	Polinom::A=A;
	Polinom::B=B;
	Polinom::C=C;
}
Polinom::Polinom()//:: Kapsam belirleme operat�r�
{
	A,B,C=0;//De�i�kenlere ilk de�er atama
}
int Polinom::DegerHesapla(int)
{
	
	cout<<"Polinom denklemi:"<<"y="<<(Polinom::A)<<"x�+"<<(Polinom::B)<<"x+"<<(Polinom::C)<<endl;//Polinom denklemini ekrana yazd�rd�m.
	
}
void Polinom::KokleriHesapla()
{
	double delta,kok1,kok2,E;//De�i�ken deklarasyonu
	delta=((Polinom::B)*(Polinom::B))-(4*((Polinom::A)*(Polinom::C)));//Deltay� hesaplama form�lu
	if(delta<0)
	{
		cout<<"Reel k�k yoktur"<<endl;
	}
	if(delta==0)
	{
		E=sqrt(delta);//Deltan�n karek�k�n� ald�m.
		//K�kleri hesaplama form�lleri
		kok1=((-(Polinom::B))+E)/(2*(Polinom::A));
		kok2=((-(Polinom::B))-E)/(2*(Polinom::A));
		
		cout<<"Denklemin birbirine e�it(�ak���k) iki k�k� vard�r."<<endl<<"kok1="<<kok1<<endl<<"kok2="<<kok2<<endl;
	}
	if(delta>0)
	{
		E=sqrt(delta);//Deltan�n karek�k�n� ald�m.
		//K�kleri hesaplama form�lleri
	    kok1=-(Polinom::B)+E/(2*(Polinom::A));
		kok2=-(Polinom::B)-E/(2*(Polinom::A));
	
		cout<<"Denklemin iki farkl� reel k�k� vard�r."<<endl<<"kok1="<<kok1<<endl<<"kok2="<<kok2<<endl;
		
	 }	
		
}   

	
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
