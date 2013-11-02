
#include <iostream>


class Comments
{
private:
	std::string m_text;
public:
	Comments();
   ~Comments();
public:
	std::string GetName(){return m_text;}
	void SetName(std::string text){m_text = text;}
public:
	void Comm_to_doc(std::string text, User userObj, Document docObj);


};