#define _CRT_SECURE_NO_WARNINGS	1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

#define DEFAULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30



enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
    char sex[MAX_SEX];	
    char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo *data;//存放一个信息
	int size;//记录已经有的元素和个数
	int capacity;//当前通讯录存储联系人的个数上限
};

//声明函数
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void SortContact(struct Contact* ps);
void DestroyContact(struct Contact* ps);
void SaveContact(struct Contact* ps);
void LoadContact(struct Contact* ps);