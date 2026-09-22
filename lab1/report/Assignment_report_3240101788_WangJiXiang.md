- **实验题目** ：Assignment 001 Students I
- **学生姓名** ：王吉祥
- **学生学号** ：3240101788
- **实验日期** ：2026年9月22日
- **实验环境** ：
    - 操作系统：Ubuntu24.04（WSL2）
    - 编译器版本：g++ 13.3.0

## 实验目的
1. 掌握c++ 标准输入输出流（cin cout）用法
2. 运用for循环遍历，活用下标
3. 格式化输出，使用制表符控制格式
4. 掌握数组储存数据
## 需求分析
1. 选择读取数据的方式
2. 按照格式输出数据
3. 计算每位同学成绩平均值
4. 计算每门课程最高分最低分平均值
## 文件目录结构
├── data
│   └── score.txt        # 数据
├── report
│   └── Assignment_report_3240101788_WangJiXiang.md
├── src
│   └── main.cpp         # 源代码
└── README.md
## 核心实现与技术细节
1. 根据成绩数据，固定了输入的学生人数与课程数  
    ```
    const int Stu = 10;
    const int Cou = 3;
    ```
2. 在运行时，需在终端输入`./main > data/score.txt`，数据储存在data/score.txt里
3. 将数据类型转为double，若不这样做，平均值将为整数，做了整除平均值将损失很大精度
    ```
        cout << '\t' << static_cast<double>(sum) / Cou << '\n';
        // 将sum转换成double类型，防止整除
    ```
4. 将每门课程的最值平均值存在数组里，方便后面格式化输出
    ```
    // 每门课的平均分、最低分、最高分
    double Avg[Cou];
    int Min[Cou], Max[Cou];
    ```
## 编译运行方式
在该目录下终端输入  
`g++ src/main.cpp -o main`   
即会出现`main`，此时终端输入  
`./main < data/score.txt`  
即完成