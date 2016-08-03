#pragma once
using namespace std;
class personelDegerlendirme;
class musteriSesi
{
public:
	//Degiskenler
	string prsnlAd;
	string prsnlSoyad;
	string tarih;
	int id;
	string olumluGorus;
	string olumsuzGorus;
	string musteriAd;
	string musteriSoyad;

	// baglantý degiskenleri 

	personelDegerlendirme *perDegerlendir;

	musteriSesi()
	{
	}
	musteriSesi(int _id, string pAd, string pSoyad, string olumlu,string olumsuz, string tarih, string mAd, string mSoyad) :
		id(_id), prsnlAd(pAd), prsnlSoyad(pSoyad), olumluGorus(olumlu), olumsuzGorus(olumsuz), musteriAd(mAd), musteriSoyad(mSoyad)
	{
	}
	~musteriSesi()
	{
	}
};

