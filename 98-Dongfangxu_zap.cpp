#pragma warning(disable:4996)
#include<string>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char d[] = "dongfangxu";
	char z[] = "zap";
	int next[2] = { 10, 3 };
	int N;
	cin >> N;

	for (int h = 0; h < N; h++)
	{
		char s[100000];
		int i = 0;
		int name_count[2] = { 0 };
		int nowcount[2] = { 0 };


		scanf("%s", s);
		int l = strlen(s);

		for (int j = 0; j < l; j++) {

			if (s[j] == 'd') {
				nowcount[1] = 0;
				for (i = 0; i < 10; i++) {
					if (*(s +j+ i) != d[i])
					{
						nowcount[0] = 0;
						break;
					}
				}
				if (i == 10) {
					nowcount[0]++;;
					if (nowcount[0] > name_count[0])
						name_count[0] = nowcount[0];
				}
			}

			if (s[j] == 'z') {
				nowcount[0] = 0;
				for (i = 0; i < 3; i++) {
					if (*(s +j+ i) != z[i])
					{
						nowcount[1] = 0;
						break;
					}
				}
				if (i == 3)
				{
					nowcount[1]++;;
					if (nowcount[1] > name_count[1])
						name_count[1] = nowcount[1];
				}
			}

		}

		if (name_count[1] > name_count[0])
			cout << z << '!' << endl;
		else
			cout << d << '!' << endl;
	}
}
