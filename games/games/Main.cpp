#include <iostream>
using namespace std;
int main() {

	char input;
	int minecraft = 0;
	int COD = 0;
	int GTA = 0;
	int mario = 0;

	cout << "What game should you play at lunch?" << endl;  //introduction to the quiz

	cout << "What is your favorite type of game? (Minecraft=m, COD=c, GTA=g, Mario=a)" << endl; //first question
	cin >> input;
	if (input == 'm')
		minecraft = minecraft + 1;
	else if (input == 'c')
		COD = COD + 1;
	else if (input == 'a')
		GTA = GTA + 1;
	else if (input == 'g')
		mario = mario + 1;

	cout << "What is your favorite Weeknd activity? (running=r, swimming=s, napping=n, chilling=c)" << endl; //second question
	cin >> input;
	if (input == 'r')
		minecraft = minecraft + 1;
	else if (input == 's')
		COD = COD + 1;
	else if (input == 'n')
		GTA = GTA + 1;
	else if (input == 'c')
		mario = mario + 1;

	cout << "What is your favorite food? (beef=b, fish=f, chicken=c, salad=s)" << endl; //third question
	cin >> input;
	if (input == 'b')
		minecraft = minecraft + 1;
	else if (input == 'f')
		COD = COD + 1;
	else if (input == 'c')
		GTA = GTA + 1;
	else if (input == 's')
		mario = mario + 1;
	
	if ((minecraft > COD) && (minecraft > GTA) && (minecraft > mario)) //checking which animal you are
		cout << "You should play Minecraft!" << endl;
		else if ((COD > minecraft) && (COD > GTA) && (COD > mario))
			cout << "You should play COD!" << endl;
		else if ((GTA > minecraft) && (GTA > COD) && (GTA > mario))
			cout << "You should play GTA!" << endl;
		else if ((mario > minecraft) && (mario > COD) && (mario > GTA))
			cout << "You should play Mario!" << endl;

}