//Due Date: 09/16/2011
//Assignment 1: header file
//Mark David Blake
//----------------Diamond.H----------------------
class Diamond
{
public:
	Diamond(); //default constructor
	
	Diamond(int length, char border='#', char fill='*');
	
	//accessors
	int GetSize();
	int Perimeter();
	double Area();
	
	//creation and mutator functions
	void Grow();
	void Shrink();
	void Summary();
	void Draw();
	
	void SetBorder(char b);    
	void SetFill(char f);
	
	
	
private:             //private member data
	int size;
	int perimeter;
	double area;
	int shrink;
	int grow;
	char fill;
	char border;
};
