#pragma once

using namespace std;
class kisi;
class banka;
class sube
{

public:
	//degiskenler
	int subeId;
	string subeAdres;
	string subeAd;
	int subeKod;
	int subeTelNo;

	// baglantı degiskenleri 
	vector <kisi*> baglidirSubeye;
	banka * bankayaAit;

	sube()
	{
	}
	sube(int id,string adres,string ad,int kod,int tel):
		subeId(id), subeAdres(adres), subeAd(ad), subeKod(kod), subeTelNo(tel)
	{
	}
	~sube()
	{
	}
};

