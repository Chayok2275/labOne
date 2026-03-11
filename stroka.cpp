#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8"); // чтоб видел русские буквы

    wstring vowels = L"АаОоУуЫыЭэИиЯяЁёЕеЮюAaOoYyUuEeIi"; 
    cout << "Наберите строку на русском или английском языке: "<< endl;
    wstring inStr; // строка ввода
    getline(wcin, inStr);
    if (inStr.size() != 0){ // проверка на пустую строку

        int num = 0; // количество гласных
                 
        for (size_t i = 0; i < inStr.size(); i++){
            for (size_t  y = 0; y  < vowels.size(); y++){
                if (inStr[i] == vowels[y]){ // проверка каждого символа на наличие его в vowels
                    num++;
                    break; // остановка цикла если буква уже найдена
                }
            }
        }   
    cout << "Всего гласных букв строке: " << num << endl;
    }
    else {
        cout << "Строка пуста, гласных нет.";
    }
    return 0;
}
