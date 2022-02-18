#include <iostream>

using namespace std;

int main()
{
        float number;
        cout << "Lotfan yek adad ashary vared konyd : "; cin >> number; cout << "\n";
        int numberint;
        numberint = number;
        cout << "number int ==> " << numberint;
        //اگر یک متغییر عدد شناور را در عدد صحیح بریزیم آن عدد شناور را گرد به صحیح میکند
        //شاید سوال باشد رو به بالا گرد میکند یا پایین طبق وارد کردن اعداد مختلف توسط بنده
        //هر عدد صحیح  که جلویش اعشار دارد تا ۶ رقم اعشار ۹ به پایین گرد میکند و از ۷ به بعد به بالا
        // مثال : x.999999 به ما میدهد x اما x.9999999 به ما میدهد x+1
}
