#include <iostream>
using namespace std;
int main()
{
/*int n;
float velocity = 7.5;
float beginNum = 15 ;
int N ;
N = (beginNum+velocity*10)/10;
cout << "Medchine's Number:"<< N << endl;
return 0;
*/
//官方例程
int n1 = 8, t1 = 30, n2 = 10, t2 = 6  ;//题目给出的测评机数量和时间
int t3 = 10;
double inc_rate = (1.0*n1*t1-n2*t2)/(t1-t2);
double init_num = n2*t2 - inc_rate*t2;
double ans = (init_num + inc_rate*t3)/t3;
cout<< "Answer: "<< ans << endl;
return 0;
}