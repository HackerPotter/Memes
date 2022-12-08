#include <iostream>
#include "Bruh.hpp"



using namespace std;
//fill(memeIDs[0], memeIDs[100], 0);

void Memes::CreateMeme()
{
	string memeNames = memeName;
	
	int i;
	for (i = 0; i < 10; i++) {
		if (memeIDs[i] == 0)
		{
			memeIDs[i] = i + 1;
			break;
		}
	}
	cout << "Added new Meme: " << """" << memeNames << """"<< " at ID " << memeIDs[i] << endl;
	cin.get();
}
