#include <iostream>

class sifreCoz {
private:
	unsigned int cozulenMesaj; // Unsigned sayının negatif almasını engellemek için kullanılır
	double gelenBirinciBasamak;
	double gelenIkinciBasamak;
	double gelenUcuncuBasamak;
	double gelenDorduncuBasamak;
public:
	sifreCoz(double, double, double, double);
	~sifreCoz();
	void setBirinciBasamak(double);
	void setIkıncıBasamak(double);
	void setUcuncuBasamak(double);
	void setDorduncuBasamak(double);
	double getBirinciBasamak() const;
	double getIkıncıBasamak() const;
	double getUcuncuBasamak() const;
	double getDorduncuBasamak() const;
	void cozSifre();
	void printMesajSifrele();
};