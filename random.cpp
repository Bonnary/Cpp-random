#include <iostream>
using namespace std;

string strlis_choice(string arr[], int arr_size) {
  // To determine the length of the array you can at this line to int main()
  // int List_size = sizeof(list) / sizeof(list[0]);

    int max = arr_size;
    int min = 0;
    int randNum = rand() % (max - min + 1) + min;
    return arr[randNum];
}

float flolis_choice(float arr[], int size) {
    int max = size;
    int min = 0;
    int randNum = rand() % (max - min + 1) + min;
    return arr[randNum];
}

int intlis_choice(int arr[], int size) {
    int max = size;
    int min = 0;
    int randNum = rand() % (max - min + 1) + min;
    return arr[randNum];
}

float randomFloat(float min, float max)
{
    float random = (float)rand() / (float)RAND_MAX;
    float diff = max - min;
    float r = random * diff;
    return min + r;
}

int randomInt(int min, int max)
{
    int random = rand() % (max - min + 1) + min;
    return random;
}

