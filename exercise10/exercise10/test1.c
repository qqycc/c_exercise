#include <stdio.h>
#include <stdlib.h>

int main(){
	//A选手说：B第二，A第三； 
	//B选手说：B第二，E第四；
	//C选手说：C第一，D第二； 
	//D选手说：C最后，D第三； 
	//E选手说：E第四，A第一； 
	//利用for循环
	for (int a = 1; a < 6; ++a){
		for (int b = 1; b < 6; ++b){
			for (int c = 1; c < 6; ++c){
				for (int d = 1; d < 6; ++d){
					for (int e = 1; e < 6; ++e){
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1) == 1 &&
							a*b*c*d*e==120){
							printf("A:%d\n", a);
							printf("B:%d\n", b);
							printf("C:%d\n", c);
							printf("D:%d\n", d);
							printf("E:%d\n", e);
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}

//A选手说：B第二，A第三； 
//B选手说：B第二，E第四； 
//C选手说：C第一，D第二； 
//D选手说：C最后，D第三； 
//E选手说：E第四，A第一； 
//每位选手都说对了一半
//确定比赛的名次
//A 3  B 5   C 1   D 2   E 4 

