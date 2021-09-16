// Lab 1 Example Templates 
template<class T>
class TempalteClass
{
public:
	TempalteClass(T val)
	{
		m_val = val;
	}
	bool operator <(TempalteClass& rval)// Passing compairion by ref
	{
		return m_val < rval.Getval();
	}

	bool operator >(TempalteClass& lval)
	{
		return m_val < lval.Getval();
	}
	T Getval()
	{
		return m_val;
	}
private:
	T m_val;
};