#include <iostream>
using namespace std;

void hat(int direction) {
	cout << "       ~-~       " << endl << "     /-~-~-\\     " << endl;
	if (direction == 1) {      /*LEFT HAT*/
		cout << " ___/_______\\" << endl;
	}
	else if (direction == 2) { /*RIGHT HAT*/
		cout << "    /_______\\___ " << endl;
	}
	else if (direction == 3) { /*BOTH HAT*/
		cout << " ___/_______\\___ " << endl;
	}
	else if (direction == 4) { /*FRONT HAT*/
		cout << "    /_______\\" << endl;
	}
}


void face(char long_hair, char eye) {
	if (long_hair == 't') { /*Output for face with long hair*/
		cout << "   \"|\"\"\"\"\"\"\"|\"    " << endl;
		cout << "   \"| " << eye << "   " << eye << " |\"   " << endl;
		cout << "   \"|   V   |\"    " << endl;
		cout << "   \"|  ~~~  |\"    " << endl;
		cout << "   \" \\_____/ \"    " << endl;
	}
	else if (long_hair == 'f') {/*Output for face with short hair*/
		cout << "    |'''''''|   " << endl;
		cout << "    | " << eye << "   " << eye << " |    " << endl;
		cout << "    |   V   |     " << endl;
		cout << "    |  ~~~  |     " << endl;
		cout << "     \\_____/      " << endl;
	}
}

void body(char arm, int torso_len) {
	int torso_part = 1;
	cout << " 0" << arm << arm << arm << arm << "|---|" << arm << arm << arm << arm << "0" << endl;
	while (torso_part <= torso_len) {
		cout << "      |-X-|" << endl;
		torso_part++;
	}
}


int main() {
	int hat_dir, torso;
	char eye, hair, arm;
	
	cout << "Welcome to AVATARS program" << endl << "To start select avatar or create your own: " << endl;
	cout << "1) Jeff \n2) Jane \n3) Chris \n4) Custom" << endl;
	
	cout << "Choose hat direction:\n 1)Left\n 2)Right\n 3)Both\n 4)Front" << endl;
	cin >> hat_dir;
	cout << "Long hair? (t/f): ";
	cin >> hair;
	cout << "Eye character: ";
	cin >> eye;
	cout << "Character for arms: ";
	cin >> arm;
	cout << "Torso length: ";
	cin >> torso;

	hat(hat_dir);
	face(hair, eye);
	body(arm, torso);
	

	return 0;
}