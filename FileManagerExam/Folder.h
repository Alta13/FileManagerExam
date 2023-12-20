#pragma once
#include "FileManager.h"

class Folder : public FileManager
{
	char foldername[15];

public:

	Folder(const char* filename) : FileManager{ filename } {}

	Folder() : FileManager() {}
	
	char* GetFolder() { return foldername; }

	void SetFolder(char* folder) { strcpy_s(foldername, folder); }

	~Folder() {}

	void Open();

	void Create();

	void Remove();

	void Rename();

	void Copy();

	void sizeFolder();
		

};