#include <iostream>
#include <cmath>
using namespace std;
//Variabili globali
int p,q,e,m;

int n(int p, int q){
	return p*q;
}
int z(int p, int q){
	return (p-1)*(q-1);
}
int d(int z, int e){
	int k=0;
	while(k==k)
	if((((k*z)+1)/e)%2==1){
		return ((k*z)+1)/e;
	}
}
int c (int m, int e, int mod){
	int num=pow(m,e);
	return num % mod;
}
int message (int c, int d, int modulo){
	int num=pow(c,d);
	return num % modulo;
}


int main()
{
	int p,q,e,m;
    //Acquisizione p, q, e ed m 
    cout << "Inserisci p:";
    cin >> p;
    cout << "Inserisci q:";
    cin >> q;
    cout << "Inserisci e:";
    cin >> e;
    cout << "Inserisci il messaggio:";
    cin >> m;
    int nA= n(p,q);
    cout<<"n= "<<nA;
    int zA= z(p,q);
    cout<<"z= "<<zA;
    int dA=d(z,e);
    cout<<"d= "<<dA;
	//Stampa dei risultati
	cout << "La chiave privata e': Kpr("<<e<<";"<<n(p,q)<<")"<<endl;
	cout << "La chiave pubblica e': Kpub("<<d(z(p,q),e)<<";"<<n(p,q)<<")"<<endl;
	cout << "Il messaggio cifrato è: "<<c(m,e,n(p,q));
    system("PAUSE");
    return 0;
}

