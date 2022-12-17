#include <iostream>
#include <math.h>
#include <locale.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int karehesap()
	{
	//Karenin alanı ve çevresini  hesaplayan program 
	int kenar,alan,cevre;
	cout<<"*******************Kare alan ve cevre hesabi************ \n";
	cout<<"Karenin bir kenarını giriniz: "<<" \n";
	
	cin>>kenar;
	cout<<"Karenin bir kenarı : "<<kenar<<" \n";
	
	alan=kenar*kenar;
	cout<<"Karenin alanı :  "<<alan<<" \n";
	
	cevre=kenar*4;
	cout<<"Karenin cevresi:  "<<cevre <<" \n";

	return 0 ;
	}
int dikdortgenhesap()
	{
	//Dikdörgenin alanı ve çevresini  hesaplayan program 
	int kenar1,kenar2,alan1,cevre1;
	cout<<"\n*******************Dikdörtgen alan ve cevre hesabi************ \n";
	cout<<"Dikdörgenin bir kenarını giriniz: "<<" \n";
	
	cin>>kenar1;
	cout<<"dikdörtgenin bir kenarı : "<<kenar1<<" \n";
	
	cout<<"Dikdörgenin ikinci kenarını giriniz: "<<" \n";
	
	cin>>kenar2;
	cout<<"dikdörtgenin ikinci kenarı : "<<kenar2<<" \n";
	
	alan1=kenar1*kenar2;
	cout<<"Dikdörtgenin alanı :  "<<alan1<<" \n";
	
	cevre1=(kenar1+kenar2)*2;
	cout<<"Dikdörtgenin cevresi:  "<<cevre1 <<" \n";

	return 0;
	}	
	
int dikucgenhesap()
	{
	//Dikucgenin alanı ve çevresini  hesaplayan program 
	float taban,yukseklik,alan,cevre,kenar1,kenar2,kenar3;
	cout<<"\n*******************Dikücgen alan ve cevre hesabi************ \n";
	cout<<"Dikücgenin taban değerini giriniz: "<<" \n";
	
	cin>>taban;
	cout<<"dikücgenin taban değeri  : "<<taban<<" \n";
	
	cout<<"Dikucgenin yükseklik değerini giriniz: "<<" \n";
	
	cin>>yukseklik;
	cout<<"Dikucgenin yükseklik değeri : "<<yukseklik<<" \n";
	
	cin>>kenar1;
	cout<<"Dikucgenin bir kenarı : "<<kenar1<<" \n";
	
	cout<<"Dikucgenin ikinci kenarını giriniz: "<<" \n";
	
	cin>>kenar2;
	cout<<"Dikucgenin ikinci kenarı : "<<kenar2<<" \n";
	cin>>kenar3;
	cout<<"Dikucgenin ikinci kenarı : "<<kenar3<<" \n";
	
	alan = (taban*yukseklik)/2;
	cout<<"Dikücgenin alanı :  "<<alan<<" \n";
	
	cevre=kenar1+kenar2+kenar3;
	cout<<"Dikucgenin cevresi:  "<<cevre <<" \n";

	return 0;
	}		
int eskenarucgenhesap()
	{
	//Eskenarucgenin alanı ve çevresini  hesaplayan program 
	float  kenar,alan,cevre,r;
	cout<<"\n*******************Eskenarücgen alan ve cevre hesabi************ \n";
	cout<<"Eskenar ücgenin kenar değerini giriniz: "<<" \n";
	
	cin>>kenar;
	cout<<"Eskenar ücgenin kenar değeri  : "<<kenar<<" \n";
	

	r=sqrt(3) / 4;
	alan = r*kenar*kenar;
	cout<<"Eskenarücgenin alanı :  "<<alan<<" \n";
	
	cevre=kenar*3;
	cout<<"Eskenarucgenin cevresi:  "<<cevre <<" \n";

	return 0;
	}		
	
int cesitkenarucgenhesap()
	{
	//Cesitkenarucgenin alanı ve çevresini  hesaplayan program 
	float  kenar1,kenar2,kenar3,alan,cevre;
	cout<<"\n*******************Cesitkenarücgen alan ve cevre hesabi************ \n";
	cout<<"Cesitkenar ücgenin kenar değerini giriniz: "<<" \n";
	
	cin>>kenar1;
	cout<<"Cesitkenar ücgenin kenar değeri  : "<<kenar1<<" \n";
	
	cout<<"Cesitkenar ücgenin kenar2 değerini giriniz: "<<" \n";
	
	cin>>kenar2;
	cout<<"Cesitkenar ücgenin kenar2 değeri  : "<<kenar2<<" \n";
	
	cout<<"Cesitkenar ücgenin kenar3 değerini giriniz: "<<" \n";
	
	cin>>kenar3;
	cout<<"Cesitkenar ücgenin kenar3 değeri  : "<<kenar3<<" \n";

	if((kenar1!=kenar2 && kenar2!=kenar3)&& (kenar3!=kenar1 ))
	{
	
    alan=(kenar1+kenar2+kenar3)/2;
	cout<<"Eskenarücgenin alanı :  "<<alan<<" \n";
	
	cevre=kenar1+kenar2+kenar3;
	cout<<"Eskenarucgenin cevresi:  "<<cevre <<" \n";

	return 0;
	}
	else{
		cout<<"Kenar değerleri yanlış girildi";
	}	
  }
int dairehesap()
{
	//Daire alan ve çevresini   hesaplayan program 
	const float pi=3.14;
	float r,alan,cevre;
	
	cout<<"\n*******************Daire alan ve cevre hesabi************ \n";
	
	cout<<"Dairenin yaricap  değerini giriniz: "<<" \n";
	
	cin>>r;
	cout<<"Dairenin yaricap   değeri  : "<<r<<" \n";
	

	alan = r * r *pi;
	cout<<"Dairenin alanı :  "<<alan<<" \n";
	
	cevre=2*pi*r;
	cout<<"Dairenin cevresi:  "<<cevre <<" \n";

	return 0;
	}	



	
int main(int argc, char** argv){
	setlocale(LC_ALL, "Turkish");
	int islem;
	cout<<"*************Geometrik cisimler(kare,dikdortgen,dikucgen,eskenarucgen,cesitkenarucgen,daire) Alan ve Cevre hesabı uygulaması ******* \n";
	cout<<"Bilgilendirme:\n1 nolu islem: kare alan ve cevre hesabı yapar.\n2 nolu islem: dikdörtgen alan ve cevre hesabı yapar \n3 nolu islem: dikucgen alan ve cevre hesabi yapar.\n4 nolu islem: eskenarucgen alan ve cevre hesabi yapar.\n5 nolu islem: Cesitkenarucgen alan ve cevre hesabi yapar.\n6 nolu islem: daire alan ve cevre hesabi yapar.\n";


		cout<<"Hangi işlemi yapmak istersin : ";
	    cin>>islem;
	switch(islem){
	    case 1:karehesap();	
	        	break;
	    case 2:dikdortgenhesap();
	        	break;
		case 3:dikucgenhesap();
	        	break;
		case 4:eskenarucgenhesap();	
	        	break;
	    case 5:cesitkenarucgenhesap();  
			    break;  	
		case 6:dairehesap();
	        	break;    	
	    default:cout<<"Diğer işlemlerde eklencek";
				break;    	
	}	






	return 0;
}
