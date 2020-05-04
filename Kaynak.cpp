#include<iostream>
#include "TicTacToe.h"
using namespace std;
int main() {
	int a, b,knt;
	TicTacToe player1;
	cout << "oyuncu 1 hareket x,y:";
	cin >> a;
	cin >> b;
	player1.hareket(1, a, b);
	knt = player1.oyunBitisKontrol();
	if (knt == 1) {
		cout << "1.oyuncu kazandi! OYUN BITTI" << endl;
		player1.diziBastir();
	}
	if (knt == 2) {
		cout << "2.oyuncu kazandi! OYUN BITTI" << endl;
		player1.diziBastir();
	}
	cout << "oyuncu 2 hareket x,y:";
	cin >> a;
	cin >> b;
	player1.hareket(2, a, b);
	knt = player1.oyunBitisKontrol();
	if (knt == 1) {
		cout << "1.oyuncu kazandi! OYUN BITTI" << endl;
		player1.diziBastir();
	}
	if (knt == 2) {
		cout << "2.oyuncu kazandi! OYUN BITTI" << endl;
		player1.diziBastir();
	}
	cout << "oyuncu 1 hareket x,y:";
	cin >> a;
	cin >> b;
	player1.hareket(1, a, b);
	knt = player1.oyunBitisKontrol();
	if (knt == 1) {
		cout << "1.oyuncu kazandi! OYUN BITTI" << endl;
		player1.diziBastir();
	}
	if (knt == 2) {
		cout << "2.oyuncu kazandi! OYUN BITTI" << endl;
		player1.diziBastir();
	}
	cout << "oyuncu 2 hareket x,y:";
	cin >> a;
	cin >> b;
	player1.hareket(2, a, b);
	knt = player1.oyunBitisKontrol();
	if (knt == 1) {
		cout << "1.oyuncu kazandi! OYUN BITTI" << endl;
		player1.diziBastir();
	}
	if (knt == 2) {
		cout << "2.oyuncu kazandi! OYUN BITTI" << endl;
		player1.diziBastir();
	}
	cout << "oyuncu 1 hareket x,y:";
	cin >> a;
	cin >> b;
	player1.hareket(1, a, b);
	knt = player1.oyunBitisKontrol();
	if (knt == 1) {
		cout << "1.oyuncu kazandi! OYUN BITTI"<<endl;
		cout << endl << endl;
		player1.diziBastir();
		cout << endl << endl;
	}
	if (knt == 2) {
		cout << "2.oyuncu kazandi! OYUN BITTI";
		cout << endl << endl;
		player1.diziBastir();
		cout << endl << endl;
	}
	cout << "oyuncu 2 hareket x,y:";
	cin >> a;
	cin >> b;
	player1.hareket(2, a, b);
	knt = player1.oyunBitisKontrol();
	if (knt == 1) {
		cout << "1.oyuncu kazandi! OYUN BITTI";
		cout << endl << endl;
		player1.diziBastir();

		cout << endl << endl;
	}
	if (knt == 2) {
		cout << "2.oyuncu kazandi! OYUN BITTI";
		cout << endl << endl;
		player1.diziBastir();
		cout << endl << endl;
	}
	cout << "oyuncu 1 hareket x,y:";
	cin >> a;
	cin >> b;
	player1.hareket(1, a, b);
	knt = player1.oyunBitisKontrol();
	if (knt == 1) {
		cout << "1.oyuncu kazandi! OYUN BITTI";
		cout << endl << endl;
		player1.diziBastir();
		cout << endl << endl;
	}
	if (knt == 2) {
		cout << "2.oyuncu kazandi! OYUN BITTI";
		cout << endl << endl;
		player1.diziBastir();
		cout << endl << endl;
	}
	cout << "oyuncu 2 hareket x,y:";
	cin >> a;
	cin >> b;
	player1.hareket(2, a, b);
	knt = player1.oyunBitisKontrol();
	if (knt == 1) {
		cout << "1.oyuncu kazandi! OYUN BITTI";
		cout << endl << endl;
		player1.diziBastir();
		cout << endl << endl;
	}
	if (knt == 2) {
		cout << "2.oyuncu kazandi! OYUN BITTI";
		cout << endl << endl;
		player1.diziBastir();
		cout << endl << endl;
	}
	else {
		cout << "KAZANAN YOK";
		cout << endl << endl;
		player1.diziBastir();
		cout << endl << endl;
	}
	cout << endl << endl;
	player1.diziBastir();
	cout << endl<<endl;
	return 0;
}