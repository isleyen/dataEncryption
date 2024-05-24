#include <iostream>


class mesajSifrele {
private:
	unsigned int mesaj;
	double birinciBasamak;
	double ikinciBasamak;
	double ucuncuBasamak;
	double dorduncuBasamak;
public:
	mesajSifrele(unsigned int);
	~mesajSifrele();
	void setBirinciBasamak(unsigned int);
	void setIk�nc�Basamak(unsigned int);
	void setUcuncuBasamak(unsigned int);
	void setDorduncuBsamak(unsigned int);
	double getBirinciBasamak() const; // const kullanma nedenim buradaki veriyi degistiremedigim anlam�na gelmektedir.
	double getIk�nc�Basamak() const;
	double getUcuncuBasamak() const;
	double getDorduncuBasamak() const;
	void sifrele();
	void printMesajSifrele();
};
