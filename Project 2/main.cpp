#include <bits/stdc++.h>
using namcespace std;

string name,surname;
string menu_sel;

int main(){
	welcome();
	
}

void welcome(){
	cout << "Enter your name: ";
	getline(cin,name); 

	cout << "Enter your surname: ";
	getline(cin,surname); 
	
	cout << "Welcome " << name << " " << surname << "!";
	menu();
}

void menu(){
	cout << "Calculator";
	
	getline(cin, menu_sel);
	menu_sel = tolower(menu_sel);
	
	if (menu_sel == "calculator"){
		
	}
}