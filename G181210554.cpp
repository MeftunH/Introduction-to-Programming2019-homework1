/****************************************************************************
**
**				ÖĞRENCİ ADI...........................:Maftun Hashimli
**				ÖĞRENCİ NUMARASI.............:G181210554
**				DERS GRUBU…………………:1C
****************************************************************************/

#include <iostream>
#include<iomanip>
#include <Windows.h>//Sleep fonk. icin gerekli
using namespace std;

void UsttenCiz(int satir, int sutun)//Çiz diye bir fonskiyon oluşturduk satır ve sütunu ise parametre olarak verik
{

	for (int i = 0; i < sutun; i++)//sutun sayisi kadar * yazdir
	{

		cout << "*";
	}
	cout << endl;
	int sutunyari = sutun / 2, kontrolustucgen = sutun / 2 - 3;
	for (int i = 0; i < satir - 2; i++)
	{	//sutun-2 kadar dondur
		for (int j = 0; j < sutun - 2; j++)
		{
			if (j == 0)//sifira esitse de * yaz
				cout << "*";

			if (j == kontrolustucgen)//j kontrolustucgene esitse * yaz

				cout << "*";

			else if (j == sutunyari)

				cout << "*";

			else //hicbiri dogru degilse  else komutunu yani bosluk yazdirmayi calistir

				cout << " ";

		}

		if (i == satir)
		{
			cout << "*";

		}
		cout << "*" << endl; kontrolustucgen--;

		sutunyari++;//Sekili tamamliyoruz
	}
	for (int i = 0; i < sutun; i++)//sutun sayisi kadar * yazdir
	{

		cout << "*";

	}
	cout << endl;


}

void Alttanciz(int satir, int sutun)
{
	int kontrolaltucgen = (sutun / 2) - 1;

	for (int i = 1; i <= satir; i++)//satir kadar donucek
	{
		for (int j = 1; j <= sutun; j++)//sutun icin olan dongu
		{
			if (i > 1 && i < satir)
			{
				int sutunyari = sutun / 2;
				if (j == 1 || j == sutun)//j 1'e yada sutun'a esitse yildiz yazdiracak
				{
					cout << "*";
				}

				if (j > 1 && j < sutun)//j'den buuyukse yada sutundan kucukse kontrol if'inin icine girecek

				{
					if (j == (sutunyari - kontrolaltucgen) || j == (sutunyari + (1 + kontrolaltucgen)))
					{
						cout << "*";

					}
					else
					{
						cout << " ";
					}

				}
			}
			if (i == 1 || i == satir)
			{
				cout << "*";
			}
		}
		kontrolaltucgen--;
		cout << endl;
	}
}
int main()

{

	int satir, sutun;//degiskenleri olustur
	cout << "lutfen satir sayisini giriniz ";
	cin >> satir;//degerleri al

	while (satir < 5 || satir > 15)
	{

		cout << "Satir sayisi 5 ve 15 arasinda olmak zorunda";

		cin >> satir;
	}
	cout << "Lutfen sutun sayisini giriniz ";

	cin >> sutun;//degerleri al

	while (sutun < 5 || sutun > 40)
	{
		cout << "Sutun sayisi 5 ve 40 arasinda olmak zorunda";
		cin >> sutun;
	}
	while (sutun != 2 * satir)//sutun satirin 2 kati degilse olana kadar kullanicidan degerleri al
	{
		cout << "sutun degeri satir degerinin iki kati olmak zorunda " << endl;

		cout << "lutfen satir sayisini giriniz ";
		cin >> satir;//degerleri al

		while (satir < 5 || satir > 15)//satir 5le 15 arasinda
		{
			cout << "Satir sayisi 5 ve 15 arasinda olmak zorunda";
			cin >> satir;
		}

		cout << "Lutfen sutun sayisini giriniz ";

		cin >> sutun;//degerleri al
		while (sutun < 5 || sutun > 40)//sutun 5'le 40 arasinda
		{
			cout << "Sutun sayisi 5 ve 40 arasinda olmak zorunda";
			cin >> sutun;

		}
	}
	UsttenCiz(satir, sutun);//Ilk karakteri ekran cikaran fon. cagir
	Sleep(500);
	Alttanciz(satir, sutun);//Ikinci karakteri ekran cikaran fon. cagir
	cout << endl;
	return 0;
}

