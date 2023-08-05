//
// Created by Stark on 2023/6/27.
//

#include "../header/tools.h"

std::vector<std::string> split(const std::string &str, const std::string &pattern) {
    std::vector<std::string> res;
    if (str.empty())
        return res;

    //在字符串末尾也加入分隔符，方便截取最后一段
    std::string strs = str + pattern;
    size_t pos = strs.find(pattern);

    while (pos != std::string::npos)
    {
        std::string temp = strs.substr(0, pos);
        res.push_back(temp);
        // 去掉已分割的字符串,在剩下的字符串中进行分割
        strs = strs.substr(pos + 1, strs.size());
        pos = strs.find(pattern);
    }
    return res;
}