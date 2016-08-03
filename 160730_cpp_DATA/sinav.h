#pragma once
using namespace std;
class kisi;
class banka;
class sinav
{
public:
	string snvIlce;
	string snvTarih;
	string snvAd;
	string snvIl;
	int snvSure;
	int snvId;
	string snvYer;

	// baglantý degiskenleri 
	vector <kisi*> girerSinava;
	vector<banka*> yapanBanka;



	sinav(){
	};
	sinav(int id, int sure, string ad, string il, string tarih,string ilce,string yer) :
		snvId(id), snvSure(sure), snvIl(il), snvTarih(tarih), snvIlce(ilce), snvYer(yer)
	{
	}
	~sinav(){}
};

