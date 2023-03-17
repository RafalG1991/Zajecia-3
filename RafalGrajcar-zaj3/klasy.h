class A
{
public:
	int aPublic;
protected:
	int aProtected;
private:
	int aPrivate;
};

class B : public A
{
public:
	int bPublic;
	void metodaB();
protected:
	int bProtected;
private:
	int bPrivate;
};

class C : public B
{
public:
	int cPublic;
	void metodaC();
protected:
	int cProtected;
private:
	int cPrivate;
};

