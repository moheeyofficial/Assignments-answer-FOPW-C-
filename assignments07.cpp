//  التكليف االسابع في الأسبوع الثاني من كورس
// Fundamentals Of Programming With C++

/*
لديك الكود التالي ونحتاج لتغيير سطر واحد فقط
 مكان الآخر حتى تطبق المطلوب وهو رقم 100
*/

/*
#include <iostream>
using namespace std;

int num = 100;

int read()
{
  int num = 50;
  cout << num;
  return 0;
}

int play()
{
  int num = 200;
  read();
  return 0;
}

int main()
{
  play();
  return 0;
}
*/

#include <iostream>
using namespace std;

int num = 50;
int read()
{
    int num = 100;
    cout << num;
    return 0;
}

int play()
{
    int num = 200;
    read();
    return 0;
}

int main()
{
    play();
    return 0;
}