//  التكليف الأول في الأسبوع الخامس من كورس 
// Fundamentals Of Programming With C++

/*
لديك المتغيرات التالية الخاصة بالعمر والنقاط والتقييم
بشرط واحد فقط نريد أن نفصح إذا كان العمر أكبر من 18 والنقاط أكبر من 500 والتقييم أكبر من 5
إذا تحققت جميع الشروط نقوم بطباعة الرسالة كما في المثال
*/

/*
    int age = 40;
int points = 800;
float rate = 8.5f;

// Your Condition Here

// Output Needed If All Conditions Is True
"Yes Age > 18 & Points > 500 & Rate > 5"
*/

//                  الحل 

#include <iostream>
    using namespace std;

int main ()
{
    int age = 40;
    int points = 800;
    float rate = 8.5f;

    // Your Condition Here
    if (age >18 && points >500 && rate >5)
        cout << "Yes Age > 18 & Points > 500 & Rate > 5" ;
    else 
    {
        cout << "sorry "; 
    }

    // Output Needed If All Conditions Is True
    // "Yes Age > 18 & Points > 500 & Rate > 5"


    return 0;
}