#pragma once
#include "kisi.h"
#include<iostream>
using namespace std;
class kisi;
class kisiBilgileri 
{
public:
	//degiskenler
	int kisiBilgId;
	string kisiBilgAd ;
	string kisiBilgSoyad ;
	int kisiBilgTcNo ;
	int dogumTarihi ;
	string kisiCinsiyet ;
	int kisiTelNo ;
	string medeniHal ;
	int kisiSigortaNo;
	string kisiGorev ;
	int isYeriSicilNo ;
	string isBasTarihi ;
	string kisiadres ;
	string mezunOlduguOkul ;
	string kisisifre ;
	int kisiMaas ;
	string kisiUnvan ;

	// baglantý degiskenleri 
	kisi *sahipOlan;


	kisiBilgileri()// tamami yukarida boþ olarak atandi;
	{
		
	}
	// burada ise teker teker elemanlarin girilmesi gerekmektedir.constructor
	kisiBilgileri(int id,string ad,string soyad,int tc,int dogumTarih,string cinsi,int tel,string medeni,
		int sigNo,string gorev,int sicilno,string basTarih,string adres,string okul,string sifre,int maas,string unvan):
			kisiBilgId(id), kisiBilgAd(ad), kisiBilgSoyad(soyad), kisiBilgTcNo(tc), dogumTarihi(dogumTarih), kisiCinsiyet(cinsi),
				kisiTelNo(tel), medeniHal(medeni), kisiSigortaNo(sigNo), kisiGorev(gorev), isYeriSicilNo(sicilno), isBasTarihi(basTarih),
				kisiadres(adres), mezunOlduguOkul(okul), kisisifre(sifre), kisiMaas(maas), kisiUnvan(unvan)
	{

	}
	~kisiBilgileri()
	{
	}
};

