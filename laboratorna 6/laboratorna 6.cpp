#include <iostream>
using namespace std;

class Data {
protected:
    int totalTimeSec;
public:
    Data(int hours, int minutes, int seconds)
    {
        if (hours > 24 || minutes > 60 || seconds > 60)
        {
            cout << "ERROR" << endl;
        }
        else
        {
            this->totalTimeSec = (hours * 3600) + (minutes * 60) + seconds;
        }
    }
    Data()
    {
        this->totalTimeSec = 0;
    }
    void operator= (const Data& other)
    {
        this->totalTimeSec = other.totalTimeSec;
    }
    bool operator == (const Data& other)
    {
        return other.totalTimeSec == this->totalTimeSec;
    }

    bool operator < (const Data& other)
    {
        return other.totalTimeSec < this->totalTimeSec;
    }

    bool operator > (const Data& other)
    {
        return other.totalTimeSec > this->totalTimeSec;
    }

    Data  operator - (const Data& other)
    {
        this->totalTimeSec = this->totalTimeSec - other.totalTimeSec;
        return *this;
    }

    Data operator += (const Data& other)
    {
        this->totalTimeSec = this->totalTimeSec + other.totalTimeSec;
        return *this;
    }

    friend ostream& operator << (ostream& out, const Data& object)
    {
        int time = object.totalTimeSec;
        int hours = (time / 3600);
        time = time - (hours * 3600);
        int minutes = (time / 60);
        time = time - (minutes * 60);
        int seconds = time;
        cout << hours << "." << minutes << "." << seconds << endl;
        return out;
    }

    friend istream& operator>> (istream& in, Data& object) {
        cin >> object.totalTimeSec;
        return in;
    }
};

int main()
{
    Data time(11, 60, 36);
    Data time1(10, 49, 15);
    cout << time << endl << time1 << endl;
    cout << "-----------------------------------" << endl;
    cout << "operator = " << endl;
    Data time2 = time;
    cout << time << endl << time2 << endl;
    cout << "-----------------------------------" << endl;
    cout << "operator == " << endl;
    bool comparison = time == time2;
    cout << comparison << endl;
    cout << "-----------------------------------" << endl;
    cout << "operator >" << endl;
    bool more = time > time2;
    cout << more << endl;
    cout << "-----------------------------------" << endl;
    cout << "operator <" << endl;
    bool less = time < time2;
    cout << less << endl;
    cout << "-----------------------------------" << endl;
    cout << "operator - " << endl;
    Data difference;
    difference = time2 - time1;
    cout << difference << endl;
    cout << "-----------------------------------" << endl;
    cout << "operator +=" << endl;
    time += time2;
    cout << time << endl;

    Data inputTime;
    cin >> inputTime;
    cout << inputTime;
    return 0;
}