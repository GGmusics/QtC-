#ifndef STUSQL_H
#define STUSQL_H
#include <QSqlDatabase>
#include <QObject>

struct UserInfo
{
    QString username;
    QString password;

};


class stuSql : public QObject
{
    Q_OBJECT
public:



//    //查询所有学生数量
//    quint32 getStuCnt();


//    QList<StuInfo> getPageStu(quint32 page,quint32 uiCnt);
//    QList<StuInfo> getStus(const QString& fiter);
//    //增加学生
//    bool addStu(StuInfo);
//    bool addStu(QList<StuInfo> l);


//    //删除学生
//    bool delStu(int id);

//    //清空学生表
//    bool clearStuTable();

//    //修改学生信息
//    bool UpdateStuInfo(StuInfo info);

//    //查询所有用户
//    QList<UserInfo> getAllUser();

//    UserInfo getUser(const QString& u);
//    //查询用户名是否存在
//    bool isExit(QString strUser);

//    //更新用户信息
//    bool updateUser(UserInfo info);

//    //添加单个用户
//    bool AddUser(UserInfo info);

//    //删除单个用户
//    bool delUser(QString strUserName);


//    // 成绩管理：
//     // 查询某学号 学生所有成绩
//    QList<StuGrade> queryGrade(int stu_id);
//    QList<StuGrade> queryGrade(QString classname);
//    QList<StuGrade> queryGrade();
//    // 查询学号 某科目成绩
//    StuGrade queryGrade(int stu_id, const QString&  class_name);
//    StuGrade queryGrade(int stu_id, int  class_id);
//    // 删除成绩
//    bool delGrade(StuGrade s);
//    // 修改成绩
//    bool alterGrade(StuGrade s);
//    // 增加成绩
//    bool addGrade(StuGrade s);


//    bool isExit(StuGrade s);


};



#endif // STUSQL_H
