#include <iostream>

class sifreCoz {
private:
	unsigned int cozulenMesaj; // Unsigned say�n�n negatif almas�n� engellemek i�in kullan�l�r
	double gelenBirinciBasamak;
	double gelenIkinciBasamak;
	double gelenUcuncuBasamak;
	double gelenDorduncuBasamak;
public:
	sifreCoz(double, double, double, double);
	~sifreCoz();
	void setBirinciBasamak(double);
	void setIk�nc�Basamak(double);
	void setUcuncuBasamak(double);
	void setDorduncuBasamak(double);
	double getBirinciBasamak() const;
	double getIk�nc�Basamak() const;
	double getUcuncuBasamak() const;
	double getDorduncuBasamak() const;
	void cozSifre();
	void printMesajSifrele();
};