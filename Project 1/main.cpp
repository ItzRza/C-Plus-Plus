#include <bits/stdc++.h>
using namespace std;

string row1[3] = {"","",""};
string row2[3] = {"","",""};
string row3[3] = {"","",""};

bool turn = true;
int row;
int col;


void printxox(){
	system("cls");
	cout << "   " << row1[0] << "  |  " << row1[1] << "  |  " << row1[2] << endl;
	cout << "-----------------" << endl;
	cout << "   " << row2[0] << "  |  " << row2[1] << "  |  " << row2[2] << endl;
	cout << "-----------------" << endl;
	cout << "   " << row3[0] << "  |  " << row3[1] << "  |  " << row3[2] << endl;
}

bool checkWin(string s){
    // Row-lar
    if (row1[0]==s && row1[1]==s && row1[2]==s) return true;
    if (row2[0]==s && row2[1]==s && row2[2]==s) return true;
    if (row3[0]==s && row3[1]==s && row3[2]==s) return true;

    if (row1[0]==s && row2[0]==s && row3[0]==s) return true;
    if (row1[1]==s && row2[1]==s && row3[1]==s) return true;
    if (row1[2]==s && row2[2]==s && row3[2]==s) return true;

    if (row1[0]==s && row2[1]==s && row3[2]==s) return true;
    if (row1[2]==s && row2[1]==s && row3[0]==s) return true;
    return false;
}

bool isFull(){
    for (int i=0; i<3; i++){
        if (row1[i]==" " || row2[i]==" " || row3[i]==" ") return false;
    }
    return true;
}

void xoxask(){
	if (turn){
		cout << "Turn of X" << endl;
		cin >> row >> col;

		if (row == 1) row1[col-1] = "X";

		else if (row == 2) row2[col-1] = "X";

		else if (row == 3) row3[col-1] = "X";
	}

	else {
		cout << "Turn of O" << endl;
		cin >> row >> col;

		if (row == 1) row1[col-1] = "O";

		else if (row == 2) row2[col-1] = "O";

		else if (row == 3) row3[col-1] = "O";
	}
	printxox();
}


int main (){
	printxox();
	while (true) {
		xoxask();
		turn = !turn;
	}
}
