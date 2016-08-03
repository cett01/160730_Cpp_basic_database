#pragma once
#include"kisi.h"
using namespace std;
class musteriSesi;
class sinavSonuc;
class kisi;
class banka;
class personelDegerlendirme
{

public:
	//degiskenler
	int prsnlId;
	string dgrlndrmTarihi;
	string gecerlilikTarihi;
	string personel;
	string donem;
	string hedef;
	string dgrlndren;

	// baglantý degiskenleri 
	vector< musteriSesi*> musSesi;
	vector< sinavSonuc*> sinSonuc;
	vector<kisi*> kisi;
	banka * bankasi;

	personelDegerlendirme(){
	};
	personelDegerlendirme(int id, string degerlenTarih, string gecerTarih, string person, string _donem, string _hedef, string _dgrlendiren) :
		prsnlId(id), dgrlndrmTarihi(degerlenTarih), gecerlilikTarihi(gecerTarih), personel(person), donem(_donem), dgrlndren(_dgrlendiren)
	{
	}
	~personelDegerlendirme(){}
};

