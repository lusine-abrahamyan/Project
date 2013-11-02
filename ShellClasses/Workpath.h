
#include <iostream>
#include "Document.h"
#include "User.h"


class Workpath
{
private:
	int m_workpathid;
	std::string m_name;
public:
	Workpath();
	~Workpath();
public:
	int GetWPid(){return m_workpathid;}
	std::string GetName(){return m_name;}
public:
	void SetWPid(int id){m_workpathid = id;}
	void Setname(std::string name){m_name = name;}
public:
	void PushDoc(Document obj);
    void Rename(std::string new_name);
    void Delete(Document docObj);
	std::vector<int> docsId;
	
	


};