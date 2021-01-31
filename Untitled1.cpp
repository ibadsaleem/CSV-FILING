#include <bits/stdc++.h>
using namespace std;
int main()
{
	string line;
	string word;
	string Array[4];
	string Promo ;
	string Promo_Type;
	int Discount , Validity;
	fstream fin("PromoCodes.csv",ios::in);
	fstream fout("temp.csv",ios::out);
	if (fin.is_open()){
		while (getline(fin,line)){
			stringstream s(line);
			int i=0;
			while (getline(s,word,',')){
				Array[i] = word;
				i++;
			} 
//			for (int i=0 ; i<4 ;i++){
//				cout << Array[i] << endl;
//			}
			Promo = Array[0];
			Discount = stoi (Array[1]);
			Validity = stoi (Array[2]);
			Promo_Type = Array[3];
			if (Promo == "GariSharing"){
				cout << "\nPromoCode: " << Promo;
				cout << "\nDiscount: " << Discount;
				cout << "\nValidity: " << Validity;
				cout << "\nPromo Type: " << Promo_Type;
				break;
			}
			fout << Promo << "," << Discount << ","  << Validity << "," << Promo_Type << endl;
		}
		while (getline(fin,line)){
			stringstream s(line);
			int i=0;
			while (getline(s,word,',')){
				Array[i] = word;
				i++;
			} 
			Promo = Array[0];
			Discount = stoi (Array[1]);
			Validity = stoi (Array[2]);
			Promo_Type = Array[3];
			fout << Promo << "," << Discount << "," << Validity << "," << Promo_Type << endl;
		}
	}
	else {
		cout << "\nFile doesnot exist." << endl;
	}
	fin.close();
}

