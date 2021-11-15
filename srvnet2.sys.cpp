#include<stdio.h>
#include<Windows.h>


void xor_algorithm(char* a1, char* a2, int keyIndex)
{
	__int64 result; // rax
	int v3; // [rsp+0h] [rbp-18h]

	v3 = 0;
	do
	{
		a2[v3] = a1[keyIndex] ^ a1[v3];
		v3++;
	} while (a2[v3 - 1]);

}

void sub_140008A14(char* a1, char* a2) {
	__int64 result; // rax
	int v3; // [rsp+0h] [rbp-18h]

	v3 = 0;
	do
	{
		a2[v3] = a1[5] ^ a1[v3];
		v3++;
		/*result = (unsigned __int8)a2[v3++];*/
	}   while (a2[v3 - 1]);
	 


}
__int64 v4; // rdx
unsigned __int64 v5; // r9
char* v6; // rcx
unsigned __int64 v7; // r8
unsigned __int64 i; // r8
__m128 v9; // xmm0
char* v10; // r8
__m128* v11; // rcx
unsigned __int64 v12; // r8
unsigned __int64 v13; // r9
unsigned __int64 j; // r9
__int64 v15; // r8

result = a1;
if (a3 < 8)
{
	for (i = a3 & 7; i; --i)
		a1->m128_i8[i - 1] = a2;
}
else
{
	v4 = 0x101010101010101i64 * a2;
	if (a3 >= 0x4F)
	{
		v9 = _mm_movelh_ps(v4, v4);
		*a1 = v9;
		v10 = a1 + a3;
		v11 = (&a1[1] & 0xFFFFFFFFFFFFFFF0ui64);
		v12 = v10 - v11;
		v13 = v12 >> 7;
		if (v12 >> 7)
		{
			do
			{
				*v11 = v9;
				v11[1] = v9;
				v11 += 8;
				v11[-6] = v9;
				v11[-5] = v9;
				--v13;
				v11[-4] = v9;
				v11[-3] = v9;
				v11[-2] = v9;
				v11[-1] = v9;
			}         while (v13);
			v12 &= 0x7Fu;
		}
		for (j = v12 >> 4; j; --j)
			*v11++ = v9;
		v15 = v12 & 0xF;
		if (v15)
			*(v11 + v15 - 16) = v9;
	}
	else
	{
		v5 = a3 & 0xFFFFFFFFFFFFFFF8ui64;
		v6 = a1 + (a3 & 0xFFFFFFFFFFFFFFF8ui64);
		do
		{
			*(&result->m128_u64[-1] + v5) = v4;
			v5 -= 8i64;
		}       while (v5);
		v7 = a3 & 7;
		if (v7)
			*&v6[v7 - 8] = v4;
	}
}
return result;

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
	}   while (a2[v3 - 1]);
	
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
	}   while (a2[v3 - 1]);
	
}
void sub_140007F8C()
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


void __fastcall xor_algorithm_5(char* a1, char* a2)
{
	__int64 result; // rax
	int v3; // [rsp+0h] [rbp-18h]

	v3 = 0;
	do
	{
		a2[v3] = a1[29] ^ a1[v3];
		v3++;
	}   while (a2[v3 - 1]);

}

void sub_140007EA8()
{
	char v1[32]; // [rsp+28h] [rbp-30h] BYREF
	char byte_140080748[50];
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
	xor_algorithm_5(v1, byte_140080748);
	printf("%s\n", byte_140080748);
}

void sub_1400020D4(char* a1, char* a2)
{
	__int64 result; // rax
	int v3; // [rsp+0h] [rbp-18h]

	v3 = 0;
	do
	{
		a2[v3] = a1[13] ^ a1[v3];
		v3++;
	}   while (a2[v3 - 1]);

}

void sub_1400023F4()
{
	char v1[16]; // [rsp+28h] [rbp-20h] BYREF
	char unk_140080450[25];

	v1[0] = 50;
	v1[1] = 31;
	v1[2] = 43;
	v1[3] = 26;
	v1[4] = 13;
	v1[5] = 9;
	v1[6] = 28;
	v1[7] = 13;
	v1[8] = 46;
	v1[9] = 1;
	v1[10] = 4;
	v1[11] = 13;
	v1[12] = 104;
	v1[13] = 104;
	sub_1400020D4(v1, unk_140080450);
	printf("%s\n", unk_140080450);
}

void sub_140003B10()
{
	char v1[24]; // [rsp+28h] [rbp-30h] BYREF
	char unk_140080528[50];

	v1[0] = 40;
	v1[1] = 5;
	v1[2] = 35;
	v1[3] = 7;
	v1[4] = 23;
	v1[5] = 0;
	v1[6] = 11;
	v1[7] = 59;
	v1[8] = 28;
	v1[9] = 20;
	v1[10] = 29;
	v1[11] = 0;
	v1[12] = 31;
	v1[13] = 19;
	v1[14] = 6;
	v1[15] = 27;
	v1[16] = 29;
	v1[17] = 28;
	v1[18] = 52;
	v1[19] = 27;
	v1[20] = 30;
	v1[21] = 23;
	v1[22] = 114;
	v1[23] = 114;
	xor_algorithm(v1, unk_140080528, 23);
	printf("%s\n", unk_140080528);
}

// xor_algorithm(char* a1, char* a2, int keyIndex)
void sub_140001FC0(char* a1, char* a2)
{
	__int64 result; // rax
	int v3; // [rsp+0h] [rbp-18h]

	v3 = 0;
	do
	{
		a2[v3] = a1[21] ^ a1[v3];
		v3++;
	}   while (a2[v3 - 1]);
	
}


void sub_1400012D0()
{
	char v1[24]; // [rsp+28h] [rbp-30h] BYREF
	char unk_140080388[50];
	v1[0] = 32;
	v1[1] = 3;
	v1[2] = 51;
	v1[3] = 2;
	v1[4] = 21;
	v1[5] = 17;
	v1[6] = 4;
	v1[7] = 21;
	v1[8] = 35;
	v1[9] = 9;
	v1[10] = 3;
	v1[11] = 4;
	v1[12] = 21;
	v1[13] = 29;
	v1[14] = 36;
	v1[15] = 24;
	v1[16] = 2;
	v1[17] = 21;
	v1[18] = 17;
	v1[19] = 20;
	v1[20] = 112;
	v1[21] = 112;
	sub_140001FC0(v1, unk_140080388);
	printf("%s\n", unk_140080388);
}



void sub_14000201C(char* a1, char* a2)
{
	__int64 result; // rax
	int v3; // [rsp+0h] [rbp-18h]

	v3 = 0;
	do
	{
		a2[v3] = a1[24] ^ a1[v3];
		v3++;
	}   while (a2[v3 - 1]);
	
}
void sub_140001000()
{
	char v1[32]; // [rsp+28h] [rbp-30h] BYREF
	char unk_1400803A8[50];
	v1[0] = 45;
	v1[1] = 14;
	v1[2] = 41;
	v1[3] = 24;
	v1[4] = 15;
	v1[5] = 16;
	v1[6] = 20;
	v1[7] = 19;
	v1[8] = 28;
	v1[9] = 9;
	v1[10] = 24;
	v1[11] = 46;
	v1[12] = 4;
	v1[13] = 14;
	v1[14] = 9;
	v1[15] = 24;
	v1[16] = 16;
	v1[17] = 41;
	v1[18] = 21;
	v1[19] = 15;
	v1[20] = 24;
	v1[21] = 28;
	v1[22] = 25;
	v1[23] = 125;
	v1[24] = 125;
	sub_14000201C(v1, unk_1400803A8);
	printf("%s\n", unk_1400803A8);
}


void sub_1400010C8()
{
	char v1[16]; // [rsp+28h] [rbp-20h] BYREF
	char  byte_1400803C8[40];
	v1[0] = 55;
	v1[1] = 26;
	v1[2] = 46;
	v1[3] = 1;
	v1[4] = 2;
	v1[5] = 30;
	v1[6] = 8;
	v1[7] = 109;
	v1[8] = 109;
	xor_algorithm(v1, byte_1400803C8, 8);
	
	printf("%s\n", byte_1400803C8);
}


//
__int64 __fastcall sub_140003890(char* a1, char* a2)
{
	__int64 result; // rax
	int v3; // [rsp+0h] [rbp-18h]

	v3 = 0;
	do
	{
		a2[v3] = a1[16] ^ a1[v3];
		result = a2[v3++];
	}   while (a2[v3 - 1]);
	return result;
}
int main() {

	dotSysStr();
	sub_140008310();//zsrvnet2
	sub_140007F8C(); //\systemroot\system32\drivers
	sub_140007EA8();
	sub_1400023F4();
	sub_140003B10();
	sub_1400012D0();
	sub_140001000();//PsTerminateSystemThread
	sub_1400010C8();//ZwClose
	getchar();
	return 0;
}



	





