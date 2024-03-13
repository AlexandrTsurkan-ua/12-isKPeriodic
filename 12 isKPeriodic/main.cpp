#include <iostream>
using namespace std;




bool isKPeriodic(string str, int length, int K)
{

    for (int i = K; i < length; i += K)
    {
        // проверяем не выходим ли за пределы строки (в конечном итоге и кратность длины строки числу к)
        if (i + K > length)
        {
            return false;
        }
        for (int j = 0, t = i; j < K; j++, t++)
        {
            // проверяем посимвольно следующие "к" кол-во элементов (начиная с t = i (i в свою очередь равен k, затем i +=k)) с первыми к-элементами (j)
            // если не равны, возвращаем Ложь
            if (str[t] != str[j])
                return false;
        }
    }
    // далее, т.к. проверили и длину и равенство элементов возвращаем true
    return true;
}







int main()
{
    setlocale(LC_ALL, "");

    cout << "Введите проверяемую фразу: " << endl;
    string str;
    cin >> str;
    int len = str.length();
    int K;
    cout << "Введите значение кратности К: " << endl;
    cin >> K;

    if (isKPeriodic(str, len, K) == true)
        cout << "Да, фраза: " << str << " периодична числу К = " << K << endl;
    else
        cout << "Нет, фраза: " << str << " не периодична числу К = " << K << endl;

    return 0;
}