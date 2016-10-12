
#include <iostream>

using namespace std;

//КОНТЕЙНЕРИ
#include <vector>
#include <list>
#include <string>
#include <algorithm> //бібліотека алгоритмів


bool cmp(const  string &a, const string &b) //функціія сортуваня(порівняння), щоб вася завжди перший
{
    const string vasaName = "vasa";

    if (a == vasaName)
    {return true;}
    else if (b==vasaName)
    {
    return false;
    }
    return a<b;
}




int main(int argc, char *argv[])
{


   //auto s = "s";

    auto valueToExit = 0;

    vector <int> inputValues;

   // vector<decltype(valueToExit)> inputValues;


//введення
    do
    {
    auto input= valueToExit;
    cin>>input;



//    if(input)

        if(input!=valueToExit)
    inputValues.push_back(input);
        else {break;}

    }while (true);

                             cout<<"________" <<endl;

//    for (int i=0;i<inputValues.size();i++) //звичайни форм для виводу
//    {

//        cout<<inputValues.at(i)<<endl;
//    }



//    for(int value:inputValues) //новий фор
//    {
//        cout<<value<<endl;

//    }



//    //ще новіший фор для виводу з контейнера
//    for (vector<int>::const_iterator it = begin(inputValues);
//    it != end(inputValues);
//    ++it)
//    {
//        cout<<*it<<endl;
//    }

    //сортуэмо з поч значення по останнэ
   // sort(inputValues.begin(),inputValues.end()); //Звичайне сортування


    //сортуємо так, щоб вася завжди був перший
 //   sort(inputValues.begin(),inputValues.end(),&cmp);


    //домножити кожен елемент на два, використовуючи алгоритми
    //for_each -  дія з кожним елементом

    auto mult = [](int &value) { value= value*2;};

    for_each(inputValues.begin(),inputValues.end(),mult);


    //вивід через алгоритми

    auto print = [] (int &value){cout<<value<<endl;};
    for_each(inputValues.begin(),inputValues.end(),print);





                             // ще новіший фор з ауто
//    for (auto it = begin(inputValues);
//    it != end(inputValues);
//    ++it) //ітератор вперед
//    {
//        cout<<*it<<endl;
//    }




    return 0;
}


