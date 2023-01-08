#include <iostream>
#include "Memes.hpp"

using namespace std;
int x = 0;

void errorCode(int errCode)
{
	switch (errCode)
	{
	case 000:
		cout << "system error you acting kinda sus. either you changed the f*cking code or someine changed the source code you dumb*ss Sussy Baka";
		std::cin.get();
		exit(-1);
		break;
	case 001:
		cout << "Could not find storage type specified, Sussy Baka";
		std::cin.get();
		exit(-1);
		break;
	case 002:
		cout << "You cant change the settings you know, Sussy Baka";
		exit(-1);
		break;
	default:
		errorCode(000);
		break;
	}
}
void Memes::Settings(store_t dataStructure)
{
	try {
		if (settings)
		{
			throw 002;
			return (void)0;
		}
		if(!settings)
		{
			storageT = dataStructure;
			settings = true;
		}
	}
	catch (int errNum)
	{
		cout << "Error Code " << errNum << "\n";
		errorCode(errNum);

	}
	
	
}

int Memes::CreateMeme(string memeName)
{
	try{
		if (storageT == VECTOR)
		{
			vMemeIDs.push_back(memeName);
			x++;
			return x;
		}
		else
		{
			throw 001;
		}
	}
	catch (int errNum)
	{
		cout << "Error Code " << errNum << "\n";
		errorCode(errNum);

	}
	
	
}

string Memes::FindMeme(int ID)
{
	try {
		if (storageT == VECTOR && settings)
		{
			return vMemeIDs[ID-1];
		}
		else
		{
			throw 001;
		}
	}
	catch (int errNum)
	{
		cout << "Error Code " << errNum << "\n";
		errorCode(001);

	}
}

void Memes::EndProg()
{
	try {
		if (storageT == VECTOR && settings)
		{
			cout << "Program ended succesfully, tho you stil actin' kinda sus\n";
			vMemeIDs.clear();
			settings = false;
		}
		else
		{
			throw 001;
		}
	}
	catch (int errNum)
	{
		cout << "Error Code " << errNum << "\n";
		errorCode(errNum);

	}
}

