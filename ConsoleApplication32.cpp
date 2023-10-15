#include "FileSystemObject.h"
#include "File.h"
#include "Folder.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    Folder root("Корінь");
    root.addFile("файл1.txt", 100);
    root.addFile("файл2.txt", 150);
    root.addFolder("Підпапка1");
    root.addFolder("Підпапка2");

    root.showInfo();
    cout << "Size folder : " << root.getSize() << " byte" << endl;

    return 0;
}