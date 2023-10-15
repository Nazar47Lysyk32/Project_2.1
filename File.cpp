#include "File.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

File::File(const string& name, int size) : FileSystemObject(name), size(size) {}

void File::showInfo() const {
    cout << "File: " << name << " (Size: " << size << " byte)" << endl;
}

int File::getSize() const {
    return size;
}