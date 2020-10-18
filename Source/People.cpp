#include "../Headers/People.h"



People::People(){
	name = "Albert Einstien";
	profession = "Scientist";
};


void People::Introduce(){
	cout << "\n\n\n\n";
	cout << "Hi my name is ";
	cout << name << endl;
	cout << "I am a " << profession;
	cout << "\n\n\n\n";
}
