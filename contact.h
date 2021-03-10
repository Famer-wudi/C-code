#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

//#define max 3

#define default_sz 1

#define max_name 20
#define max_sex 6
#define max_tel 12
#define max_addr 30

enum M
{
	Exit,
	add,
	del,
	search,
	modify,
	show,
	sort,
	save
};

typedef struct peoinfo
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tel[max_tel];
	char addr[max_addr];
}peoinfo;

struct contact
{
	//��Ҫ��һ��������¼��ǰ������
	//struct peoinfo data[max];
	struct peoinfo *data;
	int size;
	int capacity;//��¼���ٵ�������
};

void initcon(struct contact* pc);

void Addcontact(struct contact* pc);

void showcontact(struct contact* pc);

void Delcontact(struct contact* pc);

void searchcon(struct contact* pc);

void modifycon(struct contact* pc);

void destroycontact(struct contact* pc);

void savecontact(struct contact* pc);

void loadcon(struct contact* pc);