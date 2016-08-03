#pragma once
#include"kisi.h"
#include"musteriSesi.h"
#include"sinavSonuc.h"
using namespace std;
class veritabani
{
private:
	// burada dosya okuma fonksiyonlari bulunacak.
public:
	//degiskenler
	vector<kisi> vecKisiler;
	vector<kisiBilgileri> vecKisiBilgileri;
	vector<terfi> vecTerfi;
	vector<sube> vecSube;
	vector<sinav> vecSinav;
	vector<sinavSonuc> vecSinavSonuc;
	vector<satis> vecSatis;
	vector<personelDegerlendirme> vecPerDegerlen;
	vector<musteriSesi> vecMusteriSesi;
	vector<egitim> vecEgitim;
	vector<banka> vecBanka;
	
	void insaEt();
	void insaEt(string, string, string);
	veritabani();
	~veritabani();
};

