#include <iostream>
#include "Memes.hpp"

int main(void)
{



	Memes mMeme;
	mMeme.Settings(VECTOR);
	std::cout << "Meme ID " << mMeme.CreateMeme("Meme") << "\n";
	std::cout << mMeme.FindMeme(1) << std::endl;
	

	mMeme.EndProg();

	mMeme.Settings(VECTOR);

	return 0;
}