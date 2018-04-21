#pragma once
// Здесь представленно описание класса "Участник" и прототипы всех необходимых методов.
#include <string>

class Member
{
public:

	Member();                           // Конструктор по умолчанию
	Member(const char*, const char*);   // Параметрический конструктор

	~Member();                          // Деструктор


private:
	char nickname[10];                 // Никнейм участника
	char memberStatus[10];             // Статус участника"
};
