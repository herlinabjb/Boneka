#include <iostream>
#include <string>
using namespace std;

class boneka{
	public:
		void bersuara(string bunyi);
		int jumlahboneka;
		string warnaboneka;
};

int main(){
	boneka bonekakucing,bonekaayam,bonekaanjing;
	
	bonekakucing.warnaboneka = "COKLAT";
	bonekaayam.warnaboneka = "HITAM";
	bonekaanjing.warnaboneka = "COKLAT";
	
	cout << (bonekakucing.warnaboneka);
	bonekakucing.bersuara("MEONGGGGGG");
	
	bonekaanjing.bersuara("GUK GUK GUKKK");
}

void boneka::bersuara(string bunyi){
	cout << "Bunyinya "<<bunyi<< " !!"<<endl;
}
