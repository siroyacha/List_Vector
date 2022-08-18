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
		// ** 리스트 함수
		list<int> Numbers;

		// ** 첫번째 원소를 가르키는 반복자
		//Numbers.begin();

		// ** 첫번째 원소 반환
		//Numbers.front();

		// ** 마지막을 가르키는 반복자
		//Numbers.end();

		// ** 마지막 원소 반환
		//Numbers.back();

		// ** 마지막 위치에 값을 추가함
		//Numbers.push_back();

		// ** 첫번쨰 위치에 값을 추가함
		//Numbers.push_front();

		// ** _where 위치에 _Value값을 포함시킨다
		// ** _where 은 반복자
		//Numbers.insert(_where, _Value);

		// ** 반복자가 있는 위치의 원소를 삭제한다. 그리고 다음 반복자를 반환
		//iter = Numbers.erase(iter);

		// ** 첫번쨰 원소를 삭제
		//Numbers.pop_front();

		// ** 마지막 원소 삭제
		//Numbers.pop_back();

		// ** 전체 원소 삭제
		//Numbers.clear();

		// ** 현재 노드의 총 개수를 반환
		//Numbers.size();

		// ** 리스트에 값이 있는지 없는지 확인(중요)
		//Numbers.empty();

		// ** 리스트를 정렬한다.
		//Numbers.sort();

		/*
		for (int i = 0; i < 10; i++)
		{
			srand(GetTickCount64() * (i + 1) * GetTickCount64());
			Numbers.push_back(rand() % 100 + 1);
		}

		cout << "정렬 전" << endl;
		for (list<int>::iterator  iter = Numbers.begin();
			iter != Numbers.end(); ++iter)
			cout << *iter << endl;
		cout << endl;
		Numbers.sort(Compare);
		cout << "정렬 후" << endl;
		for (list<int>::iterator  iter = Numbers.begin();
			iter != Numbers.end(); ++iter)
			cout << *iter << endl;
		cout << endl;
		*/
	}

	{
		// ** 벡터 함수
		vector<int> Numbers;

		// ** 첫번째 원소를 가르키는 반복자
		//Numbers.begin();

		// ** 첫번째 원소 반환
		//Numbers.front();

		// ** 마지막을 가르키는 반복자
		//Numbers.end();

		// ** 마지막 원소 반환
		//Numbers.back();

		// ** 마지막 위치에 값을 추가함
		//Numbers.push_back();

		// ** _where 위치에 _Value값을 포함시킨다
		// ** _where 은 반복자
		//Numbers.insert(_where, _Value);

		// ** 반복자가 있는 위치의 원소를 삭제한다. 그리고 다음 반복자를 반환
		//iter = Numbers.erase(iter);

		// ** 마지막 원소 삭제
		//Numbers.pop_back();

		// ** 전체 원소 삭제
		//Numbers.clear();

		// ** 현재 노드의 총 개수를 반환
		//Numbers.size();

		// ** 노드가 삽입될 수 있는 여유 공간의 수 반환
		//Numbers.capacity();

		// ** 배열처럼 접근 가능
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
				
		// ** 벡터에 값이 있는지 없는지 확인(중요)
		//Numbers.empty();
	}

	return 0;
}

bool Compare(int _Temp, int _Dest)
{
	return _Temp < _Dest;
}