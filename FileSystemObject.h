#pragma once
#include <string>
#include <string>
#include <vector>
using namespace std;

class FileSystemObject {
public:

    // ����������� ��� ����������� ���� ��'����
    FileSystemObject(const string& name);

    // ³���������� ���������� ��� ��'���
    void showInfo() const;

    // �������������� ��'����
    void rename(const string& new_name);

    // ��������� ��'���� 
    void remove();

    // ��������� ������ ��'����
    int getSize() const;


protected:
    string name;
};
