#pragma once
// ����� ������������� �������� ������ "��������" � ��������� ���� ����������� �������.
#include <string>

class Member
{
public:

	Member();                           // ����������� �� ���������
	Member(const char*, const char*);   // ��������������� �����������

	~Member();                          // ����������


private:
	char nickname[10];                 // ������� ���������
	char memberStatus[10];             // ������ ���������"
};
