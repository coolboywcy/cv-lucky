#ifndef CONVERT_H_
#define CONVERT_H_

class Convert
{
	public:
		Convert(const int &asciilValue);
		~Convert();
		void PrintPasswd()const;

	private:
		const char Reflection(const int &asiilValue)const;

	private:
		int m_asciilValue;
};

#endif
