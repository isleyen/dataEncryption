#include <iostream>
#include "sifreCoz.h"

using namespace std;

sifreCoz::sifreCoz(double gelenBirinci, double gelenIkinci, double gelenUcuncu, double gelenDorduncu) {
	setBirinciBasamak(gelenBirinci);
	setIk�nc�Basamak(gelenIkinci);
	setUcuncuBasamak(gelenUcuncu);
	setDorduncuBasamak(gelenDorduncu);
	cozSifre();
	printMesajSifrele();
}
sifreCoz::~sifreCoz() {
	cout << this << "Desctructor Cagirildi" << endl;
}
void sifreCoz::setBirinciBasamak(double gelenBirinci) {
	gelenBirinciBasamak = (gelenBirinci) * 10 - 7;
}
void sifreCoz::setIk�nc�Basamak(double gelenIkinci) {
	gelenIkinciBasamak = (gelenIkinci) * 10 - 7;
}
void sifreCoz::setUcuncuBasamak(double gelenUcuncu) {
	gelenUcuncuBasamak = (gelenUcuncu) * 10 - 7;
}
void sifreCoz::setDorduncuBasamak(double gelenDorduncu) {
	gelenDorduncuBasamak = (gelenDorduncu) * 10 - 7;
}
double sifreCoz::getBirinciBasamak() const {
	return gelenBirinciBasamak;
}
double sifreCoz::getIk�nc�Basamak() const {
	return gelenIkinciBasamak;
}
double sifreCoz::getUcuncuBasamak() const {
	return gelenUcuncuBasamak;
}
double sifreCoz::getDorduncuBasamak() const {
	return gelenDorduncuBasamak;
}
void sifreCoz::cozSifre() {
	// temp: ��erisinde ge�ici de�er tutuyor.
	double temp = gelenBirinciBasamak;
	gelenBirinciBasamak = gelenUcuncuBasamak;
	gelenUcuncuBasamak = temp;

	temp = gelenIkinciBasamak;
	gelenIkinciBasamak = gelenDorduncuBasamak;
	gelenDorduncuBasamak = temp;

}
void sifreCoz::printMesajSifrele() {
	cout << "Gelen Mesaj: " << gelenBirinciBasamak << gelenIkinciBasamak <<  gelenUcuncuBasamak <<  gelenDorduncuBasamak << endl << endl;
	cout << "--------------------------" << endl;
}