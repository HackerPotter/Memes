#pragma once
#include <string>
#include <Windows.h>
#include <vector>
#include <stdint.h>
#define VECTOR 1
#define LINKEDLIST 2



std::vector<std::string> vMemeIDs;

typedef uint64_t store_t;

class Memes {

public:
	void Settings(store_t dataStructure);

	int CreateMeme(std::string memeName);
	std::string FindMeme(int ID);

	void EndProg();
private:
	store_t storageT;
	bool settings = false;
};