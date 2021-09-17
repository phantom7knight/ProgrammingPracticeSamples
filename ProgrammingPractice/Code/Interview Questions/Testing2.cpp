
//#include "../../Helper Functions/Helper.hpp"
#include <iostream>
#include <unordered_map>
#include <string>

class Archive
{
    class Record
    {
    public:
        Record(std::string title, std::string content)
        {
            this->title = title;
            this->content = content;
        }

        std::string title;
        std::string content;
    };

public:

    ~Archive()
    {
        clear();
    }

    void add(int id, std::string title, std::string content)
    {
        if (records.find(id) != records.end())
        {
            // Incase the id already exists then it will leak mem when it will be replaced
            // hence we find the existing one and remove it and then add new one
            std::unordered_map<int, Record*>::iterator it = records.find(id);

            delete it->second;
            records.erase(it);
        }

        records[id] = new Record(title, content);

    }

    void remove(int id, std::string& title, std::string& content)
    {
        std::unordered_map<int, Record*>::iterator it = records.find(id);

        if (it == records.end())
        {
            return;
        }

        Record* doc = it->second;
        title = doc->title;
        content = doc->content;
        delete doc;

        records.erase(it);
    }

    void clear()
    {
        for (auto i : records)
        {
            delete i.second;
        }

        records.clear();
    }

private:
    std::unordered_map<int, Record*> records;
};

#ifndef RunTests
int main()
{
    Archive archive;
    archive.add(123456, "Hamlet", "Hamlet, Prince of Denmark.");
    archive.add(123457, "Othello", "Othello, the Moore of Venice.");

    std::string title, content;
    archive.remove(123456, title, content);

    std::cout << title << '\n';
    std::cout << content;

    archive.clear();
}
#endif