#pragma once
// Здесь представленно описание класса "Группа" и прототипы всех необходимых методов.
#include "Member.h"

class Group
{
public:
	Group();                                         // Конструктор по умолчанию.

	~Group();                                        // Деструктор.

	void AddMember(const Member &);                  // Метод "Добавление участника".

	void DeleteMember(const Member &);               // Метод "Удаление участника".

private:
	int membersCount;                                // Общее кол-во участников в группе
	char groupName;                                  // Имя группы
	Member member;                                   // Участник группы
};

