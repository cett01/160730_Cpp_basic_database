#pragma once
#include "kisiBilgileri.h"
#include"terfi.h"
#include"satis.h"
#include"sinav.h"
#include "banka.h"
#include "sube.h"
#include"egitim.h"
#include"personelDegerlendirme.h"
using namespace std;

class kisi
{
public:
	//degiskenler
	int kisiId;
	string kisiAd;
	string kisiSoyad;
	int kisiTcNo;

	// baglantý degiskenleri 
	kisiBilgileri *sahipKisiBilgiler;
	personelDegerlendirme *perDegerlendir;
	vector<kisi*> yonetir;
	banka *calisandirBanka;
	sube *baglidirSube;
	vector<kisi*>baglidir;
	vector<egitim*> alirEgitim;
	terfi *terfiKisi;
	vector<satis*> yaparSatis;
	vector<sinav*> girerSinava;

	kisi(void);
	kisi(int id, int tc, string ad, string soyad) :
		kisiId(id), kisiTcNo(tc), kisiAd(ad), kisiSoyad(soyad)
	{
	}
	~kisi();
};

