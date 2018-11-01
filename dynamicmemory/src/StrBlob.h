//
// Created by kiliu on 10/31/18.
//

#ifndef CPPLEARN_STRBLOB_H
#define CPPLEARN_STRBLOB_H
#include<string>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include <bits/shared_ptr.h>

using namespace std;


class StrBlob {
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    size_type size() const{
        return data->size();
    }
    bool empty() const{
        return data->empty();
    }

    //Add element
    void push_back(const std::string &str){ data->push_back(str);}
    //Delete element
    void pop_back();
    //access
    string& front();
    const string& front() const;
    string& back();
    const string& back() const;
private:
    std::shared_ptr<std::vector<std::string>> data;
    //如果data[i]不合法，抛出一个异常
    void check(size_type i, const std::string &msg) const;

};

StrBlob::StrBlob(): data(make_shared<vector<string>>()){}
StrBlob::StrBlob(std::initializer_list<std::string> il) : data(make_shared<vector<string>>(il)){}


#endif //CPPLEARN_STRBLOB_H
