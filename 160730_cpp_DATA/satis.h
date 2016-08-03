#pragma once

#include"kisi.h"
using namespace std;
class kisi;
class satis
{
public:
	//Degiskenler
	int satisId;
	int satisAdet;
	string satisTarihi;
	int satisTur;

	// baglantý degiskenleri 
	vector <kisi*> satisYapilan;


	satis()
	{
	}
	satis(int id, int adet, int tur, string tarih) :
		satisId(id), satisAdet(adet), satisTur(tur), satisTarihi(tarih)
	{
	}
	~satis()
	{
	}
};

