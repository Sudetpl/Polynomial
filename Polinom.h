//Projenin birden fazla dosyasý içerisinde kullanýmýnýn nesne kodu bünyesinde tekrarýný engeller.
#ifndef POLINOM_H
#define POLINOM_H

class Polinom//Polinom adýnda bir sýnýf tanýmladým.
{
	public:
		Polinom(); //Yapýcý
		//Fonskiyonlarý tanýmladým.
		void KatsayilaraDegerAta(int,int,int); //x² ve x'in katsayýsý ve C sabitinin deðeri alýnýr.
        int DegerHesapla(int);
        void KokleriHesapla(void);
      
	private:
		int A;
		int B;
		int C;
};

#endif


