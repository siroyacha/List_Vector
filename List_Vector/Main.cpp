#include<iostream>
#include<list>
#include<vector>
#include<Windows.h>

using namespace std;

bool Compare(int _Temp, int _Dest);

int main()
{
	/*
	list<int> Numbers;

	Numbers.push_back(10);
	Numbers.push_back(20);
	Numbers.push_back(30);
	Numbers.push_back(40);
	Numbers.push_back(50);

	list<int>::iterator iter = Numbers.begin();

	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", (*iter++));
	}
	printf("\n");

	{
		int Array[8] = { 1,2,3,4,5,6,7,8 };

		int* iter = Array;

		for (int i = 0; i < 8; ++i)
		{
			cout << *(iter + i) << endl;
		}
	}

	{
		list<int> Numbers;

		Numbers.push_back(10);
		Numbers.push_back(20);
		Numbers.push_back(30);
		Numbers.push_back(40);
		Numbers.push_back(50);
		
		list<int>::iterator iter = Numbers.begin();

		for (int i = 0; i < 5; ++i)
		{
			cout << *(iter++) << endl;
		}
		cout << endl;
		

		for (list<int>::iterator iter = Numbers.begin();
			iter != Numbers.end(); ++iter)
		{
			cout << *iter << endl;
			cout << endl;
		}
	}
	*/
	/*
	int* pArray = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		pArray[i] = i + 1;
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << pArray[i] << endl;
	}
	*/

	{
		// ** ����Ʈ �Լ�
		list<int> Numbers;

		// ** ù��° ���Ҹ� ����Ű�� �ݺ���
		//Numbers.begin();

		// ** ù��° ���� ��ȯ
		//Numbers.front();

		// ** �������� ����Ű�� �ݺ���
		//Numbers.end();

		// ** ������ ���� ��ȯ
		//Numbers.back();

		// ** ������ ��ġ�� ���� �߰���
		//Numbers.push_back();

		// ** ù���� ��ġ�� ���� �߰���
		//Numbers.push_front();

		// ** _where ��ġ�� _Value���� ���Խ�Ų��
		// ** _where �� �ݺ���
		//Numbers.insert(_where, _Value);

		// ** �ݺ��ڰ� �ִ� ��ġ�� ���Ҹ� �����Ѵ�. �׸��� ���� �ݺ��ڸ� ��ȯ
		//iter = Numbers.erase(iter);

		// ** ù���� ���Ҹ� ����
		//Numbers.pop_front();

		// ** ������ ���� ����
		//Numbers.pop_back();

		// ** ��ü ���� ����
		//Numbers.clear();

		// ** ���� ����� �� ������ ��ȯ
		//Numbers.size();

		// ** ����Ʈ�� ���� �ִ��� ������ Ȯ��(�߿�)
		//Numbers.empty();

		// ** ����Ʈ�� �����Ѵ�.
		//Numbers.sort();

		/*
		for (int i = 0; i < 10; i++)
		{
			srand(GetTickCount64() * (i + 1) * GetTickCount64());
			Numbers.push_back(rand() % 100 + 1);
		}

		cout << "���� ��" << endl;
		for (list<int>::iterator  iter = Numbers.begin();
			iter != Numbers.end(); ++iter)
			cout << *iter << endl;
		cout << endl;
		Numbers.sort(Compare);
		cout << "���� ��" << endl;
		for (list<int>::iterator  iter = Numbers.begin();
			iter != Numbers.end(); ++iter)
			cout << *iter << endl;
		cout << endl;
		*/
	}

	{
		// ** ���� �Լ�
		vector<int> Numbers;

		// ** ù��° ���Ҹ� ����Ű�� �ݺ���
		//Numbers.begin();

		// ** ù��° ���� ��ȯ
		//Numbers.front();

		// ** �������� ����Ű�� �ݺ���
		//Numbers.end();

		// ** ������ ���� ��ȯ
		//Numbers.back();

		// ** ������ ��ġ�� ���� �߰���
		//Numbers.push_back();

		// ** _where ��ġ�� _Value���� ���Խ�Ų��
		// ** _where �� �ݺ���
		//Numbers.insert(_where, _Value);

		// ** �ݺ��ڰ� �ִ� ��ġ�� ���Ҹ� �����Ѵ�. �׸��� ���� �ݺ��ڸ� ��ȯ
		//iter = Numbers.erase(iter);

		// ** ������ ���� ����
		//Numbers.pop_back();

		// ** ��ü ���� ����
		//Numbers.clear();

		// ** ���� ����� �� ������ ��ȯ
		//Numbers.size();

		// ** ��尡 ���Ե� �� �ִ� ���� ������ �� ��ȯ
		//Numbers.capacity();

		// ** �迭ó�� ���� ����
		//Numbers[];
		
		/*
		{
			for (int i = 0; i < 10; i++)
				Numbers.push_back(i * 10);
			for (int i = 0; i < 10; i++)
				cout << Numbers[i] << endl;
		}
		cout << endl;
		{
			for (int i = 0; i < 10; i++)
				Numbers.push_back(i * 10);
			for (size_t i = 0; i < Numbers.size(); i++)
				cout << Numbers[i] << endl;
		}
		*/
				
		// ** ���Ϳ� ���� �ִ��� ������ Ȯ��(�߿�)
		//Numbers.empty();
	}

	return 0;
}

bool Compare(int _Temp, int _Dest)
{
	return _Temp < _Dest;
}