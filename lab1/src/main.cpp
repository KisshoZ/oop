#include <iostream>
#include <string>

using namespace std;

// 指定学生人数和课程数，虽然感觉由输入数据决定更好，但有点麻烦？
const int Stu = 10;
const int Cou = 3;

int main() {
    string name[Stu];
    int score[Stu][Cou];

    for (int i = 0; i < Stu; i++) {
        cin >> name[i];
        for (int j = 0; j < Cou; j++) {
            cin >> score[i][j];
        }
    }

// \t 增加一个tab键的空格，方便对齐
// 第一行
    cout << "no\tname";
    for (int j = 0; j < Cou; j++) cout << "\tscore" << j + 1;
    cout << "\taverage\n";

    // 每个学生具体信息输出行
    for (int i = 0; i < Stu; i++) {
        int sum = 0;
        for (int j = 0; j < Cou; j++) sum += score[i][j];
        cout << i + 1 << '\t' << name[i];
        for (int j = 0; j < Cou; j++) cout << '\t' << score[i][j];
        cout << '\t' << static_cast<double>(sum) / Cou << '\n';
        // 将sum转换成double类型，防止整除
    }

    // 每门课的平均分、最低分、最高分
    double Avg[Cou];
    int Min[Cou], Max[Cou];
    for (int j = 0; j < Cou; j++) {
        int sum = score[0][j], low = score[0][j], high = score[0][j];
        for (int i = 1; i < Stu; i++) {
            sum += score[i][j];
            if (score[i][j] < low)  low  = score[i][j];
            if (score[i][j] > high) high = score[i][j];
        }
        Avg[j] = static_cast<double>(sum) / Stu;
        Min[j] = low;
        Max[j] = high;
    }

    // 整体学生，各科成绩信息行
    cout << "\taverage";
    for (int j = 0; j < Cou; j++) cout << '\t' << Avg[j];
    cout << '\n';

    cout << "\tmin";
    for (int j = 0; j < Cou; j++) cout << '\t' << Min[j];
    cout << '\n';

    cout << "\tmax";
    for (int j = 0; j < Cou; j++) cout << '\t' << Max[j];
    cout << '\n';

    return 0;
}