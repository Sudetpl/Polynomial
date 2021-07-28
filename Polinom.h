//Projenin birden fazla dosyas� i�erisinde kullan�m�n�n nesne kodu b�nyesinde tekrar�n� engeller.
#ifndef POLINOM_H
#define POLINOM_H

class Polinom//Polinom ad�nda bir s�n�f tan�mlad�m.
{
	public:
		Polinom(); //Yap�c�
		//Fonskiyonlar� tan�mlad�m.
		void KatsayilaraDegerAta(int,int,int); //x� ve x'in katsay�s� ve C sabitinin de�eri al�n�r.
        int DegerHesapla(int);
        void KokleriHesapla(void);
      
	private:
		int A;
		int B;
		int C;
};

#endif


