// cfeeet 1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int fe, int in);
	void display();
	CFeet operator-(CFeet & objf);
};
void CFeet::setvalue(int fe, int in)
{
	feet = fe;
	inches = in;
}
void CFeet::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}
CFeet CFeet::operator-(CFeet &objf)
{
	CFeet temp;
	if (feet > 0)
	{
		if (feet > objf.feet)
		{
			temp.setvalue(inches = feet * 12 + inches, objf.inches = objf.feet * 12 + objf.inches);
			if (temp.inches > 11)
			{
				temp.feet = temp.inches / 12;
				temp.inches = temp.inches - (temp.inches / 12) * 12;
				temp.setvalue(temp.feet, temp.inches);
			}
		}
		else
		{
			temp.setvalue(inches = feet * 12 + inches, objf.inches = objf.feet * 12 + objf.inches);
			if (temp.inches > 11 && temp.inches < -11)
			{
				temp.feet = temp.inches / 12 * -1;
				temp.inches = temp.inches - (temp.inches / 12) * 12;
				temp.setvalue(temp.feet, temp.inches);
			}
		}
		if (feet < 0)
		{
			if (objf.feet < 0)
			{
				temp.setvalue(inches = feet * 12 - inches, objf.inches = objf.feet * 12 - objf.inches);
				if (temp.inches < -11)
				{
					temp.feet = temp.inches / 12;
					temp.inches = temp.inches - (temp.inches / 12) * 12;
					temp.setvalue(temp.feet, temp.inches);
				}
			}
			else
			{
				temp.setvalue(inches = feet * 12 - inches, objf.inches = objf.feet * 12 + objf.inches);
				if (temp.inches > 11 && temp.inches < -11)
				{
					temp.feet = temp.inches / 12 * -1;
					temp.inches = temp.inches - (temp.inches / 12) * 12;
					temp.setvalue(temp.feet, temp.inches);
				}
			}
			return temp;
		}
	};
	int main();
	{#include<iostream>
		using namespace std;
	class CFeet
	{
	private:
		int feet;
		int inches;
	public:
		void setvalue(int fe, int in);
		void display();
		CFeet operator-(CFeet & objf);
	};
	void CFeet::setvalue(int fe, int in)
	{
		feet = fe;
		inches = in;
	}
	void CFeet::display()
	{
		cout << feet << "英尺" << inches << "英寸" << endl;
	}
	CFeet CFeet::operator-(CFeet &objf)
	{
		CFeet temp;
		if (feet>0)
		{
			if (feet > objf.feet)
			{
				temp.setvalue(inches = feet * 12 + inches, objf.inches = objf.feet * 12 + objf.inches);
				if (temp.inches > 11)
				{
					temp.feet = temp.inches / 12;
					temp.inches = temp.inches - (temp.inches / 12) * 12;
					temp.setvalue(temp.feet, temp.inches);
				}
			}
			else
			{
				temp.setvalue(inches = feet * 12 + inches, objf.inches = objf.feet * 12 + objf.inches);
				if (temp.inches > 11 && temp.inches < -11)
				{
					temp.feet = temp.inches / 12 * -1;
					temp.inches = temp.inches - (temp.inches / 12) * 12;
					temp.setvalue(temp.feet, temp.inches);
				}
			}
			if (feet<0)
			{
				if (objf.feet < 0)
				{
					temp.setvalue(inches = feet * 12 - inches, objf.inches = objf.feet * 12 - objf.inches);
					if (temp.inches < -11)
					{
						temp.feet = temp.inches / 12;
						temp.inches = temp.inches - (temp.inches / 12) * 12;
						temp.setvalue(temp.feet, temp.inches);
					}
				}
				else
				{
					temp.setvalue(inches = feet * 12 - inches, objf.inches = objf.feet * 12 + objf.inches);
					if (temp.inches > 11 && temp.inches < -11)
					{
						temp.feet = temp.inches / 12 * -1;
						temp.inches = temp.inches - (temp.inches / 12) * 12;
						temp.setvalue(temp.feet, temp.inches);
					}
				}
				return temp;
			}
			return 0;
		}

int main()
{
    return 0;
}

