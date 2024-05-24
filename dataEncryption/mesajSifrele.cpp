#include <iostream>
#include "mesajSifrele.h"
using namespace std;

mesajSifrele::mesajSifrele(unsigned int mesaj) {
	cout << "----------SIFRELEME UYGULAMASI----------" << endl;
	cout << "Gonderilen Mesaj: " << mesaj << endl << endl;
	setBirinciBasamak(mesaj);
	setIkýncýBasamak(mesaj);
	setUcuncuBasamak(mesaj);
	setDorduncuBsamak(mesaj);
	sifrele();
	printMesajSifrele();
}

mesajSifrele::~mesajSifrele() {
	cout << this << "Desctructor Cagirildi" << endl;
}

void mesajSifrele::setBirinciBasamak(unsigned int mesaj) {
	birinciBasamak = mesaj % 10;
}

void mesajSifrele::setIkýncýBasamak(unsigned int mesaj) {
	ikinciBasamak = (mesaj / 10) % 10;
}

void mesajSifrele::setUcuncuBasamak(unsigned int mesaj) {
	ucuncuBasamak = (mesaj / 100) % 10;
}

void mesajSifrele::setDorduncuBsamak(unsigned int mesaj) {
	dorduncuBasamak = mesaj / 1000;
}

double mesajSifrele::getBirinciBasamak() const { // const kullanma nedenim buradaki veriyi degistiremedigim anlamýna gelmektedir
	return birinciBasamak;
}

double mesajSifrele::getIkýncýBasamak() const {
	return ikinciBasamak;
}

double mesajSifrele::getUcuncuBasamak() const {
	return ucuncuBasamak;
}

double mesajSifrele::getDorduncuBasamak() const {
	return dorduncuBasamak;
}

void mesajSifrele::sifrele() {
	double temp = birinciBasamak;
	birinciBasamak = ucuncuBasamak;
	ucuncuBasamak = temp;
	
	temp = ikinciBasamak;
	ikinciBasamak = dorduncuBasamak;
	dorduncuBasamak = temp;

	birinciBasamak = (birinciBasamak + 7) / 10;
	ikinciBasamak = (ikinciBasamak + 7) / 10;
	ucuncuBasamak = (ucuncuBasamak + 7) / 10;
	dorduncuBasamak = (dorduncuBasamak + 7) / 10;
}

void mesajSifrele::printMesajSifrele() {
	cout << "Sýfrelenmis mesaj: ";
	cout << "\nBirinci Basamak: " << getBirinciBasamak()
		<< "\nIkýncý Basamak: " << getIkýncýBasamak()
		<< "\nUcuncu Basamak: " << getUcuncuBasamak()
		<< "\nDorduncu Basamak: " << getDorduncuBasamak() << endl;
}