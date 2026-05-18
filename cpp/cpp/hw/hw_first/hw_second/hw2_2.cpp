

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
class player
{
public:
    std::string player_name;
    int goal;
    int minute;
    double efficiency;
    // 构造函数

    player(const std::string &data)
    {
        std::stringstream datas(data);
        std::string item;
        std::vector<std::string> result;
        std::vector<double> efficiency_list;
        while (std::getline(datas, item, '#'))
        {
            result.push_back(item);
        }
        player_name = result[0];
        goal = std::stoi(result[1]);
        minute = std::stoi(result[2]);
        efficiency = ((double)goal / (double)minute) * 90;
    }
};
bool compare(const player &a, const player &b)
{
    if (a.goal != b.goal)
        return a.goal > b.goal;
    if (a.efficiency != b.efficiency)
        return a.efficiency > b.efficiency;

    return a.player_name < b.player_name;
}

int main()
{
    int nums;
    std::cin >> nums;
    // std::string data;
    // std::cin >> data;
    std::vector<player> player_list;
    for (int i = 0; i < nums; i++)
    {
        std::string data;
        std::cin >> data;
        // std::string data;
        // std::cin >> data;
        // std::vector<player> player_list;
        player s(data);
        player_list.push_back(s);
    }

    std::sort(player_list.begin(), player_list.end(), compare);

    for (auto he : player_list)
    {
        std::stringstream name(he.player_name);
        std::string name_item;
        std::vector<std::string> name_result;
        while (std::getline(name, name_item, '_'))
        {
            name_result.push_back(name_item);
        }
        for (auto she : name_result)
            std::cout << she << " ";

        std::cout << "(" << he.goal << ")";
        std::cout << " " << "-" << " ";

        printf("%.2f", he.efficiency);
        std::cout << std::endl;
    }
    return 0;
}