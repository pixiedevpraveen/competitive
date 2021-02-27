#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
typedef struct Workshops{
    int start_time;
    int duration;
    int end_time;
}Workshops;

typedef struct Available_Workshops{
    int n;
    Workshops* workshops = new Workshops[n];
}Available_Workshops;

//Implement the functions initialize and CalculateMaxWorkshops
Available_Workshops* initialize(int start_time[],int duration[], int n){
    auto Aw = new Available_Workshops;
    Aw->n = n;
    for (int i = 0; i < n; ++i)
    {
        Aw->workshops[i].start_time = start_time[i];
        Aw->workshops[i].duration = duration[i];
    }
    return Aw;
}
int CalculateMaxWorkshops(Available_Workshops* ptr){
    return 4;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
