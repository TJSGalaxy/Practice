#include "iostream"
#include "random"
#include <windows.h>
using namespace std;

int get_random_num(int min,int max) {
    //创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());

    //定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min,max);

    //生成一个随机数并输出
    int random_number = dis(gen);
    return random_number;
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    //获取一个随机数字
    int num =get_random_num(1,10);

    //要求用户再猜一次
    int guess_num;
    cout<<"请猜测数字"<<endl;
    cin>>guess_num;

    //for循环去做判断并继续执行猜测
    for (bool is_continue =true;is_continue;) //控制因子变化在下面写,还是没搞明白！！！
    {
        //对猜测内容做判断
        if (guess_num == num) {
            cout<<"猜对了"<<endl;
            is_continue = false; //手动更改循环因子的值
        }
        else if (guess_num >num) {
            cout<<"你猜的大了"<<endl;
            cout<<"请重新猜测"<<endl;
            cin>>guess_num;
        }
        else {
            cout<<"你猜的小了"<<endl;
            cout<<"请重新猜测"<<endl;
            cin>>guess_num;
        }

    }

    return 0;
}