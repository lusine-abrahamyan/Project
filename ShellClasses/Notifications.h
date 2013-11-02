



class Notifications
{
private:
	bool m_type;
public:
	Notifications();
	~Notifications();
public:
	bool GetType(){return m_type;}
	void SetType(bool type){m_type = type;}
public:
	bool query();
	void show(std::vector<int> usersid,Document docObj);

};