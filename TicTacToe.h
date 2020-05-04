#pragma once
class TicTacToe
{
public:
	TicTacToe();
	int hareket(int oyuncuID,int X,int Y);
	int oyunBitisKontrol();
	void diziBastir();


private:
	int arr[3][3];
	int oyuncuID;
	int X;
	int Y;
};


