#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<ctime>
#include<deque>
#include<functional>
#include<numeric>
#include<algorithm>
#include<fstream>
#include"speaker.h"
using namespace std;

//设计演讲比赛的管理类
class SpeechManager
{
public:
	//构造函数
	SpeechManager();

	//展示菜单
	void show_Menu();

	//退出系统
	void exitSystem();

	//开始比赛 比赛整个流程控制函数
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示得分
	void showScore();

	//保存分数
	void saveRecord();

	//读取记录
	void loadRecord();

	//显示往届的记录
	void showRecord();

	//清空文件
	void clearRecord();

	//判断文件是否为空
	bool fileIsEmpty;
	
	//存放往届记录的容器
	map<int, vector<string>>m_Record;
	//析构函数
	~SpeechManager();

	//初始化容器和属性
	void initSpeech();

	//创建12名选手
	void createSpeaker();

	//成员属性
	//保存第一轮比赛选手的信息
	vector<int>v1;
	
	//第一轮晋级选手编号容器
	vector<int>v2;

	//胜出前三名选手编号容器
	vector<int>vVictory;

	//存放编号以及对应选手
	map<int, Speaker>m_Speaker;

	//存放比赛轮数
	int m_Index;
};