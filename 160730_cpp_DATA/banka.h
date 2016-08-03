#pragma once

#include"personelDegerlendirme.h"
#include"sinav.h"
using namespace std;
class kisi;
class personelDegerlendirme;
class sube;
class egitim;
class sinav;
class banka
{
	
public:
	//degiskenler
	int bankaId;
	int bankaTelNo;
	string bankaAdres;
	string bankaAd;
	string bankaIl;
	string bankaIlce;

	// baglantý degiskenleri 
	vector <kisi*> calisandirBankada;
	personelDegerlendirme * perDegerlendir;
	vector<sube*> aittirBankaya;
	vector<egitim*>belirlerBanka;
	vector<sinav*> yaparSinav;

	banka()
	{
	}
	banka(int id, int tel, string ad, string adres, string ilce, string il) :
		bankaId(id), bankaTelNo(tel), bankaAd(ad), bankaAdres(adres), bankaIlce(ilce), bankaIl(il)
	{
	}
	~banka(){}
};

