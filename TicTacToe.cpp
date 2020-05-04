#include<iostream>
#include "TicTacToe.h"
using namespace std;

TicTacToe::TicTacToe() {

	for (int i = 0; i < 3; i++)
	{
		for (int l = 0; l < 3; l++)
		{
			arr[i][l] = 0;
		}
	}
}



int TicTacToe::oyunBitisKontrol() {
	int kntrl;
	if (arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 1) {
		return 1;
	}
	else if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 1) {
		return 1;
	}
	else if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1) {
		return 1;
	}
	else if (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 1) {
		return 1;
	}
	else if (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1) {
		return 1;
	}
	else if (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 1) {
		return 1;
	}
	else if (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 1) {
		return 1;  //kazanan oyuncu 1 
		 
		
	}
	
	/*-------------------------------------------------------------*/
	
	else if (arr[0][0] == 2 && arr[0][1] == 2 && arr[0][2] == 2) {
		return 2;
	}
	else if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 2) {
		return 2;
	}
	else if (arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 2) {
		return 2;
	}
	else if (arr[0][1] == 2 && arr[1][1] == 2 && arr[2][1] == 2) {
		return 2;
	}
	else if (arr[0][2] == 2 && arr[1][1] == 2 && arr[2][0] == 2) {
		return 2;
	}
	else if (arr[0][2] == 2 && arr[1][2] == 2 && arr[2][2] == 2) {
		return 2;
	}
	else if (arr[2][0] == 2 && arr[2][1] == 2 && arr[2][2] == 2) {
		return 2;//kazanan oyuncu 2 
		kntrl = 2;
	}
	else {
	return -1;// kazanan yok .
	kntrl = -1;
	}

}

int TicTacToe::hareket(int id, int X_, int Y_) {

	oyuncuID = id;
	X = X_;
	Y = Y_;


	if (arr[X][Y] == 0) {
		arr[X][Y] = oyuncuID;
		return 0; // bos alan
	}
	else if (arr[X][Y] == 1) { // doluluk kontrol 
		return -1;
	}
	else if (arr[X][Y] == 2) {	// doluluk kontrol 
		return -1;
	}
}

void TicTacToe::diziBastir() {
	int sayac = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 3; j++)
		{
			
			if (arr[i][j] == 1) { // ÝNDEX'TEKÝ SAYÝ 1 ÝSE * BASÝYOR
				
				cout << "*"<<"  ";
				sayac++;
				if (sayac == 3) {
					cout << endl;
				}
				else if (sayac == 6) {
					cout << endl;
				}
				

			}


			else if (arr[i][j] == 2) { // ÝNDEX'TEKÝ SAYÝ 2 ÝSE O BASÝYOR
				cout << "O"<<"  ";
				sayac++;
				if (sayac == 3) {
					cout << endl;
				}
				else if (sayac == 6) {
					cout << endl;
				}
			}
		}	
		cout << endl;
	}
}

