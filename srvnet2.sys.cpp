#include<stdio.h>
#include<Windows.h>

void sub_140008A14(char* a1, char* a2) {
	__int64 result; // rax
	int v3; // [rsp+0h] [rbp-18h]

	v3 = 0;
	do
	{
		a2[v3] = a1[5] ^ a1[v3];
		v3++;
		/*result = (unsigned __int8)a2[v3++];*/
	} while (a2[v3 - 1]);



}

void dotSysStr()
{
	char unk_140080738[50];


	char v1[8]; // [rsp+28h] [rbp-20h] BYREF

	v1[0] = 78;
	v1[1] = 19;
	v1[2] = 25;
	v1[3] = 19;
	v1[4] = 96;
	v1[5] = 96;
	sub_140008A14(v1, unk_140080738);


	printf("%s\n", unk_140080738); //.sys;

}

void sub_140001EAC(char* a1, char* a2) {
	__int64 result; // rax
	int v3; // [rsp+0h] [rbp-18h]

	v3 = 0;
	do
	{
		a2[v3] = a1[8] ^ a1[v3];
		v3++;
	} while (a2[v3 - 1]);

}

void sub_140008310()
{
	// 2 function

	char v1[9]; // [rsp+28h] [rbp-20h] BYREF
	//char v2[3]; // [rsp+2Eh] [rbp-1Ah] BYREF  (unused)
	char unk_140080730[50];
	v1[0] = 30;
	v1[1] = 31;
	v1[2] = 27;
	v1[3] = 3;
	v1[4] = 8;
	v1[5] = 25;

	memcpy(&v1[6], "_mm", 3);
	sub_140001EAC(v1, unk_140080730);
	printf("%s\n", unk_140080730); //zsrvnet2
}

int main() {

	dotSysStr();
	sub_140008310();//zsrvnet2



	getchar();
	return 0;
}









