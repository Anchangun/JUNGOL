#pragma once

/*
6���� ���ڹ迭�� ����� {'J', 'U', 'N', 'G', 'O', 'L'} ���� �ʱ�ȭ �� �� ���� �� ���� �Է¹޾� �迭������ ��ġ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù ��° ��ġ�� 0���̸� �迭�� ���� ���ڰ� �ԷµǸ� "none" ��� �޽����� ����ϰ� ������ ���α׷��� �ۼ��Ͻÿ�.
*/

#include<iostream>
class Solution
{
private: 
	char check_data;
	void fn_data_check_loop(char* arr, int arr_size);

public :
	void run(char* arr, int arr_size);

};

