#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
#include<string.h>
#include<errno.h>

/*
�����ļ�		����ʹ��		�����ļ���
.c  .obj .exe

 �����ļ��� ASCII �浽����� ���� �ı��ļ�

 �������ļ���һ�����롣 �����Ʊ༭����

�ļ�·��+�ļ�������+�ļ�����׺

wb �Զ����Ƶķ�ʽд�ļ�
write	д ���ද��ʱ  ���ļ�������ʱ���Զ��������ļ���


�ļ���Ϣ�� ��һ�� �ļ��ṹ�����͵ı��������Զ������ļ����� ��������Ϣ��
�ýṹ������ָ��ά�������Ϣ��������Ϣ��ά���ļ����ݡ� ���磺FILE* pf

�����ļ�ϵͳ�����ڴ���������д����ʱ���и��ڴ���������������������ˣ���һ������������ϡ�

���ڴ�Ӵ����϶�ȡ����ʱ���и��ڴ�����뻺���������ˣ���һ�����뵽�ڴ��С�


ϵͳ�Զ������ڴ���Ϊ����ÿһ������ʹ�õ��ļ�����һ�顰�ļ�����������

�������Ĵ�С����C����ϵͳ������

ʹ���ļ�ʱ���ȴ򿪣�ʹ�����ٹرա�

FILE*pf fopen("Ҫ�򿪵��ļ���"��"������ʽ");

����һ���ļ���Ϣ������ʵ��ַ����ʧ�ܷ���NULL

fclose(���ļ�ָ��)

../��һ��·��  ��ֹת���ַ� \\


*/


/*
fgetc  ���ַ��ķ�ʽ���ļ�				 

���ַ��ķ�ʽд�ļ�
fputc��дʲô��д������ȥ����ַ����

fgets������ŵ�����ַ����飩����Ҫ�����ٸ��ֽڣ����������������ַ��

fputs  ��дʲô��д������ȥ��

*/

/*
���� ��׼�����豸s't'din
��Ļ ��׼����豸 stdout
*/

//int main()
//{
//	//int ch = fgetc(stdin);	//�ӱ�׼��������
//
//	fputc(ch,stdout);	//	Ҫ���ʲô�������д�������
//	
//	char ch[1024] = { 0 };
//	FILE* pf = fopen("t.txt", "w");
//	if (pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fputs("hello",pf);
//
//	//fgets(ch, 1024, pf);	����ŵ�һ���ַ��������棬Ҫ�������ֽڣ����������
//	fgets  ���\n һ����ˡ�

//	printf("%s", ch);
//	//fclose(pf);
//	//pf = NULL;
//	return 0;
//}

//int main()
//{
//	char ch[1024] = { 0 };
//	FILE* pf = fopen("tx.txt", "w");	// �����������Ҫ�� �� д �Ĵ򿪷�ʽ����һ�¡���
//	FILE* pf = fopen("tx.txt", "r");
//	if (pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}

//	//д�ļ���
//	/*fputs("made", pf);*/
//
//	//���ļ� 
//	fgets(ch, 100, pf);


//	printf("%s", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	/*fgets(buf, 1024, stdin);
//	fputs(buf, stdout);*/
//	gets(buf);
//	puts(buf);//Ч���ȼۡ�
//	return 0;
//}

//��ʽ���������

struct my
{
	char name[20];
	float a;
	int age;
};

int main()
{
	//д�ļ� ��ʽ�����
	/*struct my s = { "made",3.14f,20 };
	FILE* pf = fopen("tx.txt", "w");
	fprintf(pf, "%s %f %d\n", s.name, s.a, s.age);*/

	//���ļ� ��ʽ�����뺯��
	/*struct my s = { 0 };
	FILE* pf = fopen("tx.txt", "r");
	fscanf(pf, "%s %f %d\n", s.name, &(s.a), &(s.age));
	printf("%s %f %d\n", s.name, s.a, s.age);*/

	//�ӱ�׼�������������
	/*struct my s = { 0 };
	fscanf(stdin, "%s %f %d", s.name, &(s.a), &(s.age));
	fprintf(stdout, "%s %f %d", s.name, s.a, s.age);*/
	//%.2f ȥ������0 

	/*scanf fscanf sscanf
	* 
	*  sscanf  ���ַ����� �� һ����ʽ�������ݡ�
	* 
	* sprintf  ��ʽ�������� д��һ���ַ����
	* 
	* 
	printf fprintf sprintf*/
	/*struct my s= { "made",3.14f,20 };
	struct my tmp = { 0 };
	char buf[1000] = { 0 };

	sprintf(buf, "%s %f %d", s.name, s.a, s.age);*/
	/*printf("%s\n", buf);*/
	
	//�� buf �ж�ȡ��ʽ�������ݵ� tmp�С�
	/*sscanf(buf, "%s %f %d", tmp.name, &(tmp.a), &(tmp.age));
	printf("%s %f %d\n", tmp.name, tmp.a, tmp.age);*/















	return 0;
}
