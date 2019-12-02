#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s)
{
    /*
     * Write your code here.
     */
    int meridian_index = s.size() - 2;
    string meridian = s.substr(meridian_index);
    string ans = s.erase(meridian_index);

    int hour = stoi(s.substr(0, 2)) % 12;
    if (meridian == "PM")
    {
        hour += 12;
    }
    string hour_str = to_string(hour);
    if (hour_str.size() == 1)
        hour_str.insert(0, "0");
    ans = ans.replace(0, 2, hour_str);

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
