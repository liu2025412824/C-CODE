#include"contact.h"

void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}
void AddContact(struct Contact* ps)
{
	//检测当前通讯录容量
	// 如果满了，增容
	// 如果不满，什么都不干
	CheckCapacity(ps);
	//增加数据
		printf("请输入姓名:>\n");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:>\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>\n");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
}

int Find_by_name(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//找不到的情况
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除联系人的姓名;>");
	scanf("%s", name);
	int pos = Find_by_name(ps, name);
	if (pos == -1)
	{
		printf("要删的联系人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找联系人的姓名:>");
	scanf("%s",name);
	int pos = Find_by_name(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		//打印标题
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		//数据
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = Find_by_name(ps, name);
	if (pos == -1)
	{
		printf("要修改的联系人的名字不存在\n");
	}
	else
	{
		printf("请输入修改后姓名:>\n");
		scanf("%s", ps->data[pos].name);
		printf("请输入修改后年龄:>\n");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入修改后性别:>\n");
		scanf("%s", ps->data[pos].sex);
		printf("请输入修改后电话:>\n");
		scanf("%s", ps->data[pos].tele);
		printf("请输入修改后地址:>\n");
		scanf("%s", ps->data[pos].addr);

		printf("修改完成\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//打印标题
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		//数据
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
int cmp_contact_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Contact*)e1)->data->name, ((struct Contact*)e2)->data->name);
}
int cmp_contact_by_age(const void* e1, const void* e2)
{
	return ((struct Contact*)e1)->data->age - ((struct Contact*)e2)->data->age;
}
void SortContact(struct Contact* ps)
{
	int sz = ps->size;
	//qsort(ps->data, sz, sizeof(ps->data[0]), cmp_contact_by_name);//按名字排序
	qsort(ps->data, sz, sizeof(ps->data[0]), cmp_contact_by_age);//按年龄排序
	printf("联系人排序完成\n");
}

void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}