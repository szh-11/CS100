// #include <iostream>
// #include <string>
// class Student
// {
// private:
//     std::string name;
//     std::string id;
//     int entranceYear;

// public:
//     Student(const std::string &stuName, const std::string &stuId, int year)
//         : name(stuName), id(stuId), entranceYear(year) {}

//     Student() = default;

//     void setname(const std::string &newName)
//     {
//         name = newName;
//     }

//     void printInfo() const
//     {
//         std::cout << "I am " << name << ", id " << id << ", entrance year " << entranceYear << std::endl;
//     }

//     bool graduated(int year) const
//     {
//         return year - entranceYear >= 4;
//     }
// };

// int main()
// {

//     Student zeon("Zeon", "202553302", 2025);

//     zeon.printInfo();
//     zeon.setname("cook");
//     zeon.printInfo();
//     Student alice;
//     alice.printInfo();
// }
#include <iostream>
#include <string>
#include <vector>
class Skill
{

public:
    std::string Skill_name;
    int Power;
    int PP;

    Skill()
    {
        std::cin >> Skill_name >> Power >> PP;
    }
};
class Pokemon
{
public:
    std::string Pokemon_name;
    int HP;
    int num_skill;
    std::vector<Skill> s_group;

    Pokemon(const std::string &name, int health, int number)
        : Pokemon_name(name), HP(health), num_skill(number) {}

    //     Student(const std::string &stuName, const std::string &stuId, int year)
    //         : name(stuName), id(stuId), entranceYear(year) {}
    // std::cin >> Pokemon_name >> HP >> num_skill;

    void addskill(const Skill &sk)
    {

        s_group.push_back(sk);
    }

    void print() const
    {
        std::cout << Pokemon_name << HP << num_skill;
    }
};

int main()
{

    std::vector<Pokemon> P_group;

    int flag = 1;
    while (flag)
    {
        std::string name;
        int health, number;
        std::cin >> name >> health >> number;
        Pokemon player(name, health, number);
        for (int i = 0; i < player.num_skill; i++)
        {
            Skill s;
            player.addskill(s);
        }
        // P_group.push_back(player);
        // player.print();
        // std::cout << std::endl;
        if (player.Pokemon_name == "Ditto")
        {
            flag = 0;
            break;
        }
        P_group.push_back(player);
    }

    std::string player1, player2;
    std::cin >> player1 >> player2;
    Pokemon *p1;
    Pokemon *p2;
    for (auto &pl : P_group)
    {
        if (pl.Pokemon_name == player1)
        {
            p1 = &pl;
            break;
        }
    }
    for (auto &pl : P_group)
    {
        if (pl.Pokemon_name == player2)
        {
            p2 = &pl;
            break;
        }
    }
    int num_round;
    std::cin >> num_round;
    for (int i = 0; i < num_round; i++)
    {
        // std::cout << i;
        int skill1, skill2;
        std::cin >> skill1 >> skill2;

        if (skill1 >= 0 && skill1 < (int)(*p1).s_group.size() && (*p1).s_group[skill1].PP > 0)
        {
            (*p1).s_group[skill1].PP--;
            (*p2).HP = (*p2).HP - (*p1).s_group[skill1].Power;
            // std::cout << (*p2).HP;
        }
        // 结算
        if ((*p2).HP <= 0)
        {
            (*p2).HP = 0;
            std::cout << (*p1).Pokemon_name << " " << (*p1).HP;
            std::cout << std::endl;

            for (const auto &s : (*p1).s_group)
            {
                std::cout << s.Skill_name << " " << s.PP;
                std::cout << std::endl;
            }
            std::cout << std::endl;
            std::cout << (*p2).Pokemon_name << " " << (*p2).HP;
            std::cout << std::endl;

            for (const auto &s : (*p2).s_group)
            {
                std::cout << s.Skill_name << " " << s.PP;
                std::cout << std::endl;
            }
            std::cout << std::endl;
            std::cout << (*p1).Pokemon_name << " Win";
            break;
        }

        if (skill2 >= 0 && skill2 < (int)(*p2).s_group.size() && (*p2).s_group[skill2].PP > 0)
        {
            (*p2).s_group[skill2].PP--;
            (*p1).HP = (*p1).HP - (*p2).s_group[skill2].Power;
        }
        // 结算
        if ((*p1).HP <= 0)
        {
            (*p1).HP = 0;
            std::cout << (*p1).Pokemon_name << " " << (*p1).HP;
            std::cout << std::endl;

            for (const auto &s : (*p1).s_group)
            {
                std::cout << s.Skill_name << " " << s.PP;
                std::cout << std::endl;
            }
            std::cout << std::endl;
            std::cout << (*p2).Pokemon_name << " " << (*p2).HP;
            std::cout << std::endl;

            for (const auto &s : (*p2).s_group)
            {
                std::cout << s.Skill_name << " " << s.PP;
                std::cout << std::endl;
            }
            std::cout << std::endl;
            std::cout << (*p2).Pokemon_name << " Win";

            break;
        }

        // std::cout << (*p1).Pokemon_name << " " << (*p1).HP;
        //             std::cout << std::endl;

        // for (const auto &s : (*p1).s_group)
        // {
        //     std::cout << s.Skill_name << " " << s.PP;
        //     std::cout << std::endl;
        // }
        // std::cout << (*p2).Pokemon_name << " " << (*p2).HP;
        //             std::cout << std::endl;

        // for (const auto &s : (*p2).s_group)
        // {
        //     std::cout << s.Skill_name << " " << s.PP;
        //     std::cout << std::endl;
        // }
    }

    if ((*p1).HP > 0 && (*p2).HP > 0)
    {
        std::cout << (*p1).Pokemon_name << " " << (*p1).HP;
        std::cout << std::endl;

        for (const auto &s : (*p1).s_group)
        {
            std::cout << s.Skill_name << " " << s.PP;
            std::cout << std::endl;
        }
        std::cout << std::endl;
        std::cout << (*p2).Pokemon_name << " " << (*p2).HP;
        std::cout << std::endl;

        for (const auto &s : (*p2).s_group)
        {
            std::cout << s.Skill_name << " " << s.PP;
            std::cout << std::endl;
        }
        std::cout << std::endl;
        std::cout << "Draw";
    }

    // check
    //  for (const auto &p : P_group)
    //  {
    //      p.print();
    //  }

    // for ()
    return 0;
}
