#define _CRT_SECURE_NO_WARNINGS 1

#include"speechManager.h"

int main()
{
	//���������
	srand((unsigned int)time(nullptr));

	//�������������
	SpeechManager sm;
	
	////����12��ѡ�ִ���
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "ѡ�ֱ��: " << it->first << "����: " << it->second.m_Name << "����: " << it->second.m_Score[0] << endl;
	//}
	
	int choice = 0;
	
	while (true)
	{
		sm.show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1://��ʼ����
			sm.startSpeech();
			break;
		case 2://�鿴����ı�����¼
			//sm.loadRecord();
			sm.showRecord();
			break;
		case 3://��ձ�����¼
			sm.clearRecord();
			break;
		case 0://�˳�ϵͳ
			sm.exitSystem();
			break;
		default:
			system("cls");//����
			break;
		}
	}
	system("pause");
	return 0;
}