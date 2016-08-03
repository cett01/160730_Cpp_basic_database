#pragma once
#include "kisi.h"
using namespace std;
class personelDegerlendirme;
class sinavSonuc
{
public:
	//Değişkenler
	int id;
	string snvAdi;
	string snvTarih;
	int aldigiPuan;
	bool basariDurumu;
	int basariSirasi;

	// baglantı degiskenleri 

	personelDegerlendirme * perDegerlendir;
	sinavSonuc()
	{
	}
	sinavSonuc(int _id,string adi,string tarih,int puan,int sira,bool durum):
	id(_id), snvAdi(adi), snvTarih(tarih), aldigiPuan(puan), basariSirasi(sira), basariDurumu(durum)
	{
	}
	~sinavSonuc()
	{
	}
};

