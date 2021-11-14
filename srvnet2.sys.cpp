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

//function2 in the main()
void sub_140005598(char* a1, char* a2)
{
	__int64 result; // rax
	int v3; // [rsp+0h] [rbp-18h]

	v3 = 0;
	do
	{
		a2[v3] = a1[29] ^ a1[v3];
		v3++;
	} while (a2[v3 - 1]);

}
void* sub_140007F8C()
{
	char v1[60]; // [rsp+28h] [rbp-30h] BYREF
	char unk_140080860[60];

	v1[0] = 36;
	v1[1] = 11;
	v1[2] = 1;
	v1[3] = 11;
	v1[4] = 12;
	v1[5] = 29;
	v1[6] = 21;
	v1[7] = 10;
	v1[8] = 23;
	v1[9] = 23;
	v1[10] = 12;
	v1[11] = 36;
	v1[12] = 11;
	v1[13] = 1;
	v1[14] = 11;
	v1[15] = 12;
	v1[16] = 29;
	v1[17] = 21;
	v1[18] = 75;
	v1[19] = 74;
	v1[20] = 36;
	v1[21] = 28;
	v1[22] = 10;
	v1[23] = 17;
	v1[24] = 14;
	v1[25] = 29;
	v1[26] = 10;
	v1[27] = 11;
	v1[28] = 120;
	v1[29] = 120;
	sub_140005598(v1, unk_140080860);
	printf("%s\n", unk_140080860);

}


int main() {

	dotSysStr();//.sys
	sub_140008310();//zsrvnet2
	sub_140007F8C();


	getchar();
	return 0;
}









