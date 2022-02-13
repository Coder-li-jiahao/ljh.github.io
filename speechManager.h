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

//����ݽ������Ĺ�����
class SpeechManager
{
public:
	//���캯��
	SpeechManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��ʼ���� �����������̿��ƺ���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�÷�
	void showScore();

	//�������
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//��ʾ����ļ�¼
	void showRecord();

	//����ļ�
	void clearRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;
	
	//��������¼������
	map<int, vector<string>>m_Record;
	//��������
	~SpeechManager();

	//��ʼ������������
	void initSpeech();

	//����12��ѡ��
	void createSpeaker();

	//��Ա����
	//�����һ�ֱ���ѡ�ֵ���Ϣ
	vector<int>v1;
	
	//��һ�ֽ���ѡ�ֱ������
	vector<int>v2;

	//ʤ��ǰ����ѡ�ֱ������
	vector<int>vVictory;

	//��ű���Լ���Ӧѡ��
	map<int, Speaker>m_Speaker;

	//��ű�������
	int m_Index;
};