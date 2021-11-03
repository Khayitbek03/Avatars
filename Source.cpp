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


void leg(int height) {
	cout << "      HHHHH" << endl;
	int left_space = 5;
	int between_space = 1;

	for (int i = 1; i <= height; i++) {
		int now_space = 1;
		while (now_space <= left_space) {
			cout << " ";
			now_space++;
		}
		cout << "///";
		int between_now = 1;
		while (between_now <= between_space) {
			cout << " ";
			between_now++;
		}
		cout << "\\\\\\" << endl;
		left_space = left_space - 1;
		between_space = between_space + 2;
	}
}



int main() {
	int hat_dir, torso, leg_height;
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
	cout << "Leg height?";
	cin >> leg_height;


	hat(hat_dir);
	face(hair, eye);
	body(arm, torso);
	leg(leg_height);


	return 0;
}