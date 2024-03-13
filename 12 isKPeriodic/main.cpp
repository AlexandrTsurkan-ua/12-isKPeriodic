#include <iostream>
using namespace std;




bool isKPeriodic(string str, int length, int K)
{

    for (int i = K; i < length; i += K)
    {
        // ��������� �� ������� �� �� ������� ������ (� �������� ����� � ��������� ����� ������ ����� �)
        if (i + K > length)
        {
            return false;
        }
        for (int j = 0, t = i; j < K; j++, t++)
        {
            // ��������� ����������� ��������� "�" ���-�� ��������� (������� � t = i (i � ���� ������� ����� k, ����� i +=k)) � ������� �-���������� (j)
            // ���� �� �����, ���������� ����
            if (str[t] != str[j])
                return false;
        }
    }
    // �����, �.�. ��������� � ����� � ��������� ��������� ���������� true
    return true;
}







int main()
{
    setlocale(LC_ALL, "");

    cout << "������� ����������� �����: " << endl;
    string str;
    cin >> str;
    int len = str.length();
    int K;
    cout << "������� �������� ��������� �: " << endl;
    cin >> K;

    if (isKPeriodic(str, len, K) == true)
        cout << "��, �����: " << str << " ���������� ����� � = " << K << endl;
    else
        cout << "���, �����: " << str << " �� ���������� ����� � = " << K << endl;

    return 0;
}