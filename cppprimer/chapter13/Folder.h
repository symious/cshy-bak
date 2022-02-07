#include <iostream>

class Message;

class Folder {
    friend class Message;
public:
    Folder(const Folder&);
    Folder& operator=(const Folder&);
    ~Folder();
    void addMsg(Message*);
    void remMsg(Message*);
private:
    std::set<Message*> messages;
};