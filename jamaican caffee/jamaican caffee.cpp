#include<iostream>
using namespace std;

int main() {
	int choice, quant;

	int Xcoffe = 0, Xtea = 0, Xmilk = 0, Xjuice = 0, Xyoughut = 0, Xchocolate = 0;

	int Scoffe = 0, Stea = 0, Smilk = 0, Sjuice = 0, Syoughut = 0, Schocolate = 0;

	int Price_coffe = 0, Price_tea = 0, Price_milk = 0, Price_juice = 0, Price_youghut = 0, Price_chocolate = 0;

	cout << "\n\t\t%********HOSTES********%";
	cout << "\n\nEnter amount of Coffe glass available: ";
	cin >> Xcoffe;
	cout << "\nEnter amount of Tee cup available: ";
	cin >> Xtea;
	cout << "\nEnter amount of Milk glass available: ";
	cin >> Xmilk;
	cout << "\nEnter amount of Juice glass available: ";
	cin >> Xjuice;
	cout << "\nEnter amount of Youghut botle available: ";
	cin >> Xyoughut;
	cout << "\nEnter amount of Chocolate Glass available: ";
	cin >> Xchocolate;

m:
	cout << "\n\n\t\t%********CRIENT********%";
	cout << "\n\t Please choose from the MENU";
	cout << "\n1> Coffe";
	cout << "\n2> Tea";
	cout << "\n3> Milk";
	cout << "\n4> Juice";
	cout << "\n5> Youghut";
	cout << "\n6> Chocolate";
	cout << "\n7> Total Sells and Collection of the day!";
	cout << "\n8> Exit";
	cout << "\n\n\t\t%********CRIENT********%";

	cout << "\n\n\tPlease Enter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Enter number of Coffe you want: ";
		cin >> quant;
		if (Xcoffe - Scoffe >= quant) {
			Scoffe = Scoffe + quant;
			Price_coffe = Price_coffe + (quant * 1000);
			cout << "\n\tThank you for buying " << quant << " glass of coffe";
		}
		else
		{
			cout << "\n\tThere is only " << Xcoffe - Scoffe << " remain in our Caffe";
		}
		break;

	case 2:
		cout << "Enter number of Tea you want: ";
		cin >> quant;
		if (Xtea - Stea >= quant) {
			Stea = Stea + quant;
			Price_tea = Price_tea + (quant * 500);
			cout << "\n\tThank you for buying " << quant << " Cups of Tea";
		}
		else
		{
			cout << "\n\tThere is only " << Xtea - Stea << "Cups remain in our Caffe";
		}
		break;

	case 3:
		cout << "Enter number of Milk you want: ";
		cin >> quant;
		if (Xmilk - Smilk >= quant) {
			Smilk = Smilk + quant;
			Price_milk = Price_milk + (quant * 1000);
			cout << "\n\tThank you for buying " << quant << " glass of Milk";
		}
		else
		{
			cout << "\n\tThere is only " << Xmilk - Smilk << " glass remain in our Caffe";
		}
		break;

	case 4:
		cout << "Enter number of Juice you want: ";
		cin >> quant;
		if (Xjuice - Sjuice >= quant) {
			Sjuice = Sjuice + quant;
			Price_juice = Price_juice + (quant * 1000);
			cout << "\n\tThank you for buying " << quant << " glass of juice";
		}
		else
		{
			cout << "\n\tThere is only " << Xjuice - Sjuice << " glass remain in our Caffe";
		}
		break;

	case 5:
		cout << "Enter number of Youghut you want: ";
		cin >> quant;
		if (Xyoughut - Syoughut >= quant) {
			Syoughut = Syoughut + quant;
			Price_youghut = Price_youghut + (quant * 1000);
			cout << "\n\tThank you for buying " << quant << " glass of Youghut";
		}
		else
		{
			cout << "\n\tThere is only " << Xyoughut - Syoughut << " remain in our Caffe";
		}
		break;

	case 6:
		cout << "Enter number of Chocolate you want: ";
		cin >> quant;
		if (Xchocolate - Schocolate >= quant) {
			Schocolate = Schocolate + quant;
			Price_chocolate = Price_chocolate + (quant * 1000);
			cout << "\n\tThank you for buying " << quant << " glass of chocolate";
		}
		else
		{
			cout << "\n\tThere is only " << Xchocolate - Schocolate << " glass remain in our Caffe";
		}
		break;

	case 7:
		cout << "\n\t______COFFE______";
		cout << "\nTotal amount of sold Coffe is " << Scoffe;
		cout << "\nTotal amount of remain coffe is " << Xcoffe - Scoffe;
		cout << "\nTotal sells of coffe is " << Price_coffe << "Tsh.";

		cout << "\n\t______TEA______";
		cout << "\nTotal amount of sold Tea is " << Stea;
		cout << "\nTotal amount of remain Tea is " << Xtea - Stea;
		cout << "\nTotal sells of Tea is " << Price_tea << "Tsh.";

		cout << "\n\t______MILK______";
		cout << "\nTotal amount of Milk Tea is " << Smilk;
		cout << "\nTotal amount of remain Milk is " << Xmilk - Smilk;
		cout << "\nTotal sells of Milk is " << Price_milk << "Tsh.";

		cout << "\n\t______JUICE______";
		cout << "\nTotal amount of sold Juice is " << Sjuice;
		cout << "\nTotal amount of remain Juice is " << Xjuice - Sjuice;
		cout << "\nTotal sells of Juice is " << Price_juice << "Tsh.";

		cout << "\n\t______YOUGHUT_VANILLA______";
		cout << "\nTotal amount of sold Youghut is " << Syoughut;
		cout << "\nTotal amount of remain Youghut is " << Xyoughut - Syoughut;
		cout << "\nTotal sells of Youghut is " << Price_youghut << "Tsh.";

		cout << "\n\t______CHOCOLATE______";
		cout << "\nTotal amount of sold Chocolate is " << Schocolate;
		cout << "\nTotal amount of remain Chocolate is " << Xchocolate - Schocolate;
		cout << "\nTotal sells of Chocolate is " << Price_chocolate << "Tsh.";

		cout << "\n\n\t Total Jamaican Caffe sells is " << Price_coffe + Price_tea + Price_milk + Price_juice + Price_youghut + Price_chocolate << "Tsh.";
		break;

	case 8:
		exit(0);
		break;

	default:
		cout << "Ivalid choice!, please choose from the MENU.";

	};

	goto m;


}