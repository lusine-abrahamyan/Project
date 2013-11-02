
#include<iostream>
#include "User.h"
#include "Comments.h"

class Document
{
private:
	int m_doc_id;
	int m_workp_id;
	std::string m_visibility;
	std::string m_extension;
	int m_size;
	int m_owner_id;
	int m_version;	
public:
	Document(int d_id,int wp_id,std::string vis,
		std::string ext, int size, int owner_id,int version):
	    m_doc_id(d_id),
			m_workp_id(wp_id),
			m_visibility(vis),
			m_extension(ext),
			m_size(size),
			m_owner_id(owner_id),
			m_version(version){}
	~Document();
public:
	int GetDocid(){return m_doc_id;}
	int GetWPid(){return m_workp_id;}
	std::string GetVisibility(){return m_visibility;}
	std::string GetExtension(){return m_extension;}
	int GetSize(){return m_size;}
	int GetOwnerid(){return m_owner_id;}
	int GetVersion(){return m_version;}
public:
	void SetDoc_id(int id){m_doc_id = id;}
	void SetWPid(int wp){m_workp_id = wp;}
	void SetVisibility(std::string vis){m_visibility = vis;}
public:
	void Upload();
	void Delete();
	void Rename(int doc_id, std::string new_name);
	void Move();
	void Edit();
	void Share(std::vector<int> user_id);
	Document Search(Document docObj, int wp_id,User userObj);
	void Archive();
	std::vector<Comments> commentsObj;
	std::vector<int> sharedUsersId;


	


};