#include <iostream>

class sifreCoz {
private:
	unsigned int cozulenMesaj; // Unsigned sayýnýn negatif almasýný engellemek için kullanýlýr
	double gelenBirinciBasamak;
	double gelenIkinciBasamak;
	double gelenUcuncuBasamak;
	double gelenDorduncuBasamak;
public:
	sifreCoz(double, double, double, double);
	~sifreCoz();
	void setBirinciBasamak(double);
	void setIkýncýBasamak(double);
	void setUcuncuBasamak(double);
	void setDorduncuBasamak(double);
	double getBirinciBasamak() const;
	double getIkýncýBasamak() const;
	double getUcuncuBasamak() const;
	double getDorduncuBasamak() const;
	void cozSifre();
	void printMesajSifrele();
};