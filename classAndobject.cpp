#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

class User
{
    string status = "Gold";
    public:
        string first_name;
        string last_name;
        string get_status()
        {
            return status;
        }
        User()
        {
            cout << "Constructor\n";
        }
        User(string first_name, string last_name, string status)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        ~User()
        {
            cout << "Destructor\n";
        }
};

int add_user_if_not_exists(vector<User> &users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if(users[i].first_name == user.first_name && users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main()
{
    vector<User> user;
    // user.push_back(me);
    // user.push_back(User());

    User user1, user2, user3;
    user1.first_name = "Phat";
    user1.last_name = "Dang";

    user2.first_name = "Nga";
    user2.last_name = "Tran";

    user3.first_name = "Bach";
    user3.last_name = "Dang";

    user.push_back(user1);
    user.push_back(user2);
    user.push_back(user3);

    User me;
    me.first_name = "Nam";
    me.last_name = "Dang";
    cout << add_user_if_not_exists(user, me) << endl;
    cout << user.size() << endl;

    User user4("Chain", "Link", "Silver");
    cout << user4.get_status() << endl;

    return 0;
}