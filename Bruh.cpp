#include <iostream>
#include "Bruh.hpp"
#include <string>



using namespace std;
//fill(memeIDs[0], memeIDs[100], 0);

void Memes::CreateMeme(int m)
{
	int i;
	string memeNames;

	for (int n = 0; n < m; n++)
	{

		cout << "Insert meme name here: ";
		std::getline(std::cin, memeNames);

		cout << "Insert meme ID here: ";
		cin >> i;

		if (memeIDs[i] == 0)
		{
			memeIDs[i] = i;
			cout << "Added new Meme: " << "\"" << memeNames << "\"" << " at ID " << memeIDs[i] << endl;
			cin.get();
		}
		else
		{
			cout << "You already stored a meme with that ID";
			cin.get();
		}
	}
	
}

void Memes::CreateMeme()
{
	int i;
	string memeNames;


	cout << "Insert meme name here: ";
	std::getline(std::cin, memeNames);

	cout << "Insert meme ID here: ";
	cin >> i;

	if (memeIDs[i] == 0)
	{
		memeIDs[i] = i;
		cout << "Added new Meme: " << "\"" << memeNames << "\"" << " at ID " << memeIDs[i] << endl;
		cin.get();
	}
	else
	{
		cout << "You already stored a meme with that ID";
		cin.get();
	}

}
