//
// Created by kiliu on 10/31/18.
//

#include "StrBlob.h"

void StrBlob::check(StrBlob::size_type i, const std::string &msg) const {
    if( i >= data->size())
        throw out_of_range(msg);
}

string& StrBlob::front(){
    check(0, "front on empty StrBlob");
    return data->front();
}

const string& StrBlob::front() const{
    check(0,"front on empty StrBlob");
    return data->front();
}
string& StrBlob::back(){
    check(0, "back on empty StrBlob");
    return data->back();
}

const string& StrBlob::back() const{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back(){
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}
