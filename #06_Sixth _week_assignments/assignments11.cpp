//  التكليف الحادي عشر في الأسبوع السادس من كورس 
// Fundamentals Of Programming With C++

/*
لدينا Array تحتوي على مجموعة من الأرقام وهي ال Array القديمة
لدينا Array الجديدة وهي لا تحتوي على أي عناصر
المطلوب في ال Array الجديدة أن تحتوي على نفس الأرقام في ال Array القديمة ولكن معكوسة
شاهد المثال لترى المطلوب
ممنوع كتابة أي أرقام بطريقة يدوية ومعك متغير بإسم index يحتوي على رقم 1 ليساعدك
*/

#include <array>
#include <iostream>
using namespace std;

int main()
{
  // Do Not Edit The Next 3 Lines
  int index = 1;
  array<int, 3> oldNums = {10, 20, 30};
  array<int, 3> newNums;

  index--;
//   cout << index  <<endl;
newNums[index]=oldNums.back();
  index++;
newNums[index]=oldNums.at(1);
  index++;
newNums[index]=oldNums.front();

  // Write Your Code Here

  // Do Not Edit The Next 3 Lines
  cout << newNums[0] << "\n"; // 30
  cout << newNums[1] << "\n"; // 20
  cout << newNums[2] << "\n"; // 10

  return 0;
}