#include <iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i] != '\0' ; i++){
        count++;
    }
    return count;
}

void reverseString(char input[]){
    int len = length(input);
    int i = 0, j = len - 1;
    while (i < j){
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

void trimSpaces(char input[]) {
    int i = 0, j = 0;
    while (input[i] != '\0'){
        if (input[i] != ' '){
            input[j++] = input[i];
        }
        i++;
    }
    input[j] ='\0';
}

void reverse(char input[]){
    int start = 0, end = length(input) - 1;
    while (start < end){
        std::swap(input[start++], input[end--])
    }
}

void reverseStringWordWise(char input[]) {
    int i = 0, j = 0;
    while (input[i] != '\0'){
        if (input[i] != ' '){
            reverse(input);
            j++;
        }
    }
}


int main(){
    char input[1000];
    cin.getline(input, 100); 
    reverseString(input);
    cout << "ReverseStringWordWise : " << reverseStringWordWise(input) << endl;
    cout << "Reverse : " << input << endl;
    cout << "Length : " << length(input) << endl;
    trimSpaces(input);
    cout << "Trimed : " << input << endl;

}