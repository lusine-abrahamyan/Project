
#include <vector>
#include <iostream>
#include "Notifications.h"

class User
{
private:
	int m_user_id;
	std::string m_fullname;
	std::string m_email;
	std::string m_username;
	std::string m_password;
	std::string m_pic_path;
public:
	 User();
	~User();
public:
	int Getid(){return m_user_id;}
	std::string GetFname(){return m_fullname;}
	std::string GetEmail(){return m_email;}
	std::string GetUsername(){return m_username;}
	std::string GetPassword(){return m_password;}
	std::string GetPicpath(){return m_pic_path;}
public:
	void SetId(int id){m_user_id = id;}
	void SetFname(std::string fname){m_fullname = fname;}
	void SetEmail(std::string email){m_email = email;}
	void SetUsername(std::string uname){m_username = uname;}
	void SetPassword(std::string password){m_password = password;}
	void SetPicpath(std::string picpath){m_pic_path = picpath;}
public:
	int User_Func(int id,std::string fname,std::string email,
		          std::string uname,std::string password,std::string picpath);
	std::vector<Notifications> nots;
};