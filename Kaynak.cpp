#include <iostream>
using namespace std;


class Bag1 {
public:
	int dizi[100];

	int length;
	Bag1() { length = 0; }
	bool insert(int obj);// eleman ekler...
	void print();
	bool erase_one(int target);//istenilen bir eleman� sil.
	void erase_all(int target);//istenilen t�m elemanlar� sil.
	void empty();//t�m elemanlar� sil.

};


bool Bag1::insert(int obj) {

	if (length<100)
	{
		dizi[length] = obj;
		++length;
		return true;
	}

	else
	{
		return false;
	}

}


void Bag1::print() {

	if (length>0)
	{
		for (int i = 0; i < length; i++)
		{
			cout << dizi[i] << endl;

		}
	}

	else
	{
		cout << "torba bo�" << endl;
	}
}






bool Bag1::erase_one(int target) {
	

	for (int i = 0; i < length; i++)
	{
		if (target==dizi[i])
		{
			dizi[i] = dizi[length - 1];//dizinin en son eleman� o eleman�n yerine gelir.
			--length;
			return true;
		}

	}

	return false;

}

void Bag1::empty() {


	length = 0;//t�m elamnlar� siler,ge�ersiz k�lar ama elemanlar bellek h�crelerinde duruyordur
	//insert ile �zerlerine veri yaz�lmad��� s�rece orada dururlar..


}


void Bag1::erase_all(int target) {

	while (erase_one(target)==true)
	{

	}


}

int main() {

	setlocale(LC_ALL, "Turkish");

	Bag1 b1;
	cout << b1.length << endl;
	cout << "------------------" << endl;

	for (int i = 1; i < 12; i++)
	{
		b1.insert(i * 45);
	}
	
	b1.print();

	cout << "--------------------" << endl;

	b1.erase_one(180);
	b1.print();


	system("pause");


}