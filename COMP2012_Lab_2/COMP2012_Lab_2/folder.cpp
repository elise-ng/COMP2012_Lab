#include <iostream>

#include "folder.h"

using namespace std;

Folder::Folder(unsigned int size)
{
    this->maxSize = size;
    this->currSize = 0;
    this->files = new const File* [maxSize];
}

Folder::~Folder()
{
    for (int i = 0; i < this->currSize; i++) {
        delete this->files[i];
        this->files[i] = nullptr;
    }
    delete[] this->files;
    this->files = nullptr;
}

Folder::Folder(const Folder &folder)
{
    this->maxSize = folder.maxSize;
    this->currSize = folder.currSize;
    this->files = new const File* [folder.maxSize];
    for (int i = 0; i < folder.currSize; i++) {
        File* copyFile = new File(*(folder.files[i]));
        this->files[i] = copyFile;
    }
}

void Folder::addFile(const File &file)
{
    if (this->contains(file)) {
        cout << "File already exists in folder" << endl;
        return;
    }
    if (this->currSize >= this->maxSize) {
        cout << "Insufficient space for folder" << endl;
        return;
    }
    this->files[this->currSize] = new File(file);
    this->currSize += 1;
}

bool Folder::contains(const File &file) const
{
    for (int i = 0; i < this->currSize; i++) {
        if (this->files[i]->equals(file)) {
            return true;
        }
    }
    return false;
}

void Folder::print() const
{
    for (int i = 0; i < this->currSize; i++) {
        this->files[i]->print();
    }
}
