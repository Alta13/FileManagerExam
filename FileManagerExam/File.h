#pragma once
#include "FileManager.h"


class File : public FileManager
{
	char filename[100];

public:

	void SetFile(char* file) { strcpy_s(filename, file); }

	char* GetFile() { return filename; }

	File(const char* filename) : FileManager{ filename } {}

	File() : FileManager() {}

	~File() {};

	void Open();

	void Create();

	void Remove();

	void Rename();

	void Copy();

	void sizeFolder();

	void Search();

};