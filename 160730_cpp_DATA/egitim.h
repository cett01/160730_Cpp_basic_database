#pragma once
using namespace std;
class kisi;
class banka;
class egitim
{
public:
	//degiskenler
	int egtmSure;
	string egtmTarih;
	string egtmYer;
	string egtmAd;
	bool egtmZorunlu;//true zorunlu
	string egtmTur;
	string egtmSecmeli;
	int egtmId;

	// baglantý degiskenleri 

	vector <kisi*> egitimAlan();
	vector<banka*> belirleyenBanka;

	egitim()
	{
	}
	egitim(int id, int sure, string ad, string tarih, string yer, string tur, string sec) :
		egtmId(id), egtmSure(sure), egtmAd(ad), egtmTarih(tarih), egtmYer(yer), egtmTur(tur), egtmSecmeli(sec)
	{
	}
	~egitim()
	{
	}
};

