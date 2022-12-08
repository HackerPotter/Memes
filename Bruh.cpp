#include <iostream>
#include "Bruh.hpp"

using namespace std;

void Memes::CreateMeme(string memeNames, int** memeIDs)
{
	memeName = memeNames;
	memeID = memeIDs;
	for (int i = 0; i <= sizeof(**memeID) / sizeof(int*); i++)
	{
		do
		{
			if (**memeID == NULL) {
				*memeID[i] = i;
			}
		} while (*memeID[i] <= sizeof(**memeID) / sizeof(int**));
	}
	cout << "Added new Meme " << memeName;
}
