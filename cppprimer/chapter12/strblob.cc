#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class StrBlob {
    friend class StrBlobPtr;
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    size_type size() const { return data->size();};
    bool empty() const { return data->empty();};
    void push_back(const std::string &t) {data->push_back(t);};
    void pop_back();
    std::string& front();
    std::string& back();
    StrBlobPtr begin() {return StrBlobPtr(*this);};
    StrBlobPtr end() {return StrBlobPtr(*this, data->size()); };


private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

StrBlob::StrBlob(): data(make_shared<std::vector<std::string>>()) {};
StrBlob::StrBlob(initializer_list<std::string> il): data(make_shared<std::vector<std::string>>(il)) {};
void StrBlob::check(size_type i, const string &msg) const {
    if (i >= data->size()) {
        throw out_of_range(msg);
    }
};
void StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}
string& StrBlob::front() {
    check(0, "front on empty StrBlob");
    return data->front();
}
string& StrBlob::back() {
    check(0, "back on empty StrBlob");
    return data->back();
}

class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) {}
    string& deref() const;
    StrBlobPtr& incr();

private:
    shared_ptr<std::vector<std::string>> check(std::size_t, const std::string&) const;
    weak_ptr<std::vector<string>> wptr;
    size_t curr;
};
shared_ptr<std::vector<std::string>> StrBlobPtr::check(std::size_t i, const string& msg) const{
    auto ret = wptr.lock();
    if (!ret) {
        throw std::runtime_error("unbound StrBlobPtr");
    } 
    if (i >= ret->size()) {
        throw out_of_range(msg);
    }
    return ret;
}
string& StrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}
StrBlobPtr& StrBlobPtr::incr() {
    auto p = check(curr, "increment past end of StrBlobStr");
    curr++;
    return *this;
}
int main()
{

}