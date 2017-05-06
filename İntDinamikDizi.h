#include <iostream>

using namespace std;



class ÝntDinamikDizi
{


private:
	int *pDizi;
	int e_sayisi;
	int diziBoyutu;

public:

	ÝntDinamikDizi();

	void Ekle(int);
	void genislet();
	int ElemanGetir(int);
	void Kaydir(int, int);
};


ÝntDinamikDizi::ÝntDinamikDizi()
{

	pDizi = new int[10];
	e_sayisi = 0;
	diziBoyutu = 10;
}





void ÝntDinamikDizi::Ekle(int eleman)
{

	if (diziBoyutu == e_sayisi) {

		genislet();

	}



	pDizi[e_sayisi] = eleman;

	e_sayisi++;


}




void ÝntDinamikDizi::genislet()
{


	int *yeni = new int[diziBoyutu + 120];
	for (int i = 0; i <= diziBoyutu; i++) {

		yeni[i] = pDizi[i];
	}


	delete[]pDizi;


	pDizi = yeni;


	diziBoyutu = +10;
}


int ÝntDinamikDizi::ElemanGetir(int index)
{




	return pDizi[index];
}



void  ÝntDinamikDizi::Kaydir(int ix, int a)
{




	e_sayisi++;
	ix = ix - 1;



	int *yeni = new int[diziBoyutu + 10];
	for (int i = 0; i <= e_sayisi; i++) {

		if (i == ix)
			yeni[i] = a;
		else if (i<ix)
			yeni[i] = pDizi[i];
		else
			yeni[i] = pDizi[i - 1];


	}
	delete[] pDizi;
	pDizi = yeni;
}






