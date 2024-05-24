#include <iostream>
#include "mesajSifrele.h"
#include "sifreCoz.h"

using namespace std;
unsigned int veri;
void main() {

	mesajSifrele gonderilenMesaj1(1996);
	cout << endl;
	sifreCoz gelenMesaj1(gonderilenMesaj1.getDorduncuBasamak(), gonderilenMesaj1.getUcuncuBasamak(),
			                 gonderilenMesaj1.getIkýncýBasamak(), gonderilenMesaj1.getBirinciBasamak());

	cout << "\nLutfen Sifrelemek Istediginiz Veriyi Giriniz: " ;
	cin >> veri;

	mesajSifrele gonderilenMesaj2(veri);
	cout << endl;
	sifreCoz gelenMesaj2(gonderilenMesaj2.getDorduncuBasamak(), gonderilenMesaj2.getUcuncuBasamak(),
		gonderilenMesaj2.getIkýncýBasamak(), gonderilenMesaj2.getBirinciBasamak());
}