#include <iostream>
#include <string>
using namespace std;
int main() {

	string phrase[8];
	cout << "pick a number between 0-4" << endl;
	phrase[0] = "I want to love you like this is my last day on Earth. Because it propably is.";
	phrase[1] = "If I were a cat, I’d want to spend all 9 lives with you.";
	phrase[2] = "You're like a broken thermostat. I just can't turn you down.";
	phrase[3] = "If I could rearrange the alphabet, I’d put B and O together. No! Wait! That's not right…";
	phrase[4] = "You're like cholesterol, always messing with my heart.";
	while (true) {
		system("Pause");
		int number = rand() % 5 + 1;
		switch (number) {
		case 1:
			cout << phrase[0] << endl;
			break;
		case 2:
			cout << phrase[1] << endl;
			break;
		case 3:
			cout << phrase[2] << endl;
			break;
		case 4:
			cout << phrase[3] << endl;
			break;
		case 5:
			cout << phrase[4] << endl;

		}
	}

}