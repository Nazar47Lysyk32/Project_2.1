#include "FileSystemObject.h"
#include "File.h"
#include "Folder.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    Folder root("Корінь");
    root.addFile("file1.txt", 100);
    root.addFile("file2.txt", 150);
    root.addFolder("folder1");
    root.addFolder("folder2");

    root.showInfo();
    cout << "Size folder : " << root.getSize() << " byte" << endl;

    return 0;
}
