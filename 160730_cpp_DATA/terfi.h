#pragma once
#include<iostream>
#include <vector>
using namespace std;
#include"kisi.h"
class kisi;
class terfi
{
public:
	//Degiskenler
	int ilkUcret;
	int sonUcret;
	string unvan;
	string eskiGorev;
	string yeniGorev;
	int terfiId;
	string terfiTarihi;

	// baglantý degiskenleri 
	vector <kisi*> terfiAlanlar;
	terfi()
	{
	}
	terfi(int id, string _unvan, string eski, string yeni, string tarih, int ilk, int son) :
		terfiId(id), unvan(_unvan), eskiGorev(eski), yeniGorev(yeni), terfiTarihi(tarih), ilkUcret(ilk), sonUcret(son)
	{
	}
	~terfi()
	{
	}
};