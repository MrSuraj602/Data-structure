
#include <iostream>
using namespace std;
class Node
{
	public :
	string task_name;
	int priority;
	int exe_time;
	Node *next;
	Node(string t, int p, int e)
	{
		task_name = t;
		priority = p;
		exe_time = e;
		next = NULL;
	}
	void display()
	{
		cout << "Task Name: " << task_name << ", Priority: " << priority << ", Execution Time: "
		<< exe_time << endl;
	}
};
int main()
{
	/*Node *header = new Node("t1",10,15);
	Node *temp = new Node("t2",11,5);
	header -> next = temp;
	// temp->display();
	header->display();
	header->next->display();*/
	int n;
	Node *current = NULL, *previous = NULL;
	Node *header = NULL, *temp = NULL, *t;
	string tn;
	int p, e;
	cout << "Enter No. of Tasks: ";
	cin >> n; 
	for(int i=0; i<n; i++)
	{
		cout << "Enter Task Name : ";
		cin >> tn;
		cout << "Enter Priority : ";
		cin >> p;
		cout << "Enter Execution Time : ";
		cin >> e;
		
		if(header == NULL)	//Creates Header Node
		{
			header = new Node(tn,p,e);
		}
		else    //Creates Other Nodes
		{
			temp = new Node(tn,p,e);
			t = header;		//t contains address of header
			//Sorting according to priority
			if(header->priority < temp->priority)	//1. temp node priority > header node priority
			{
				temp -> next = header;
				header = temp;
			}
			else
			{
				previous = header;
				current = previous -> next;
				while(current->priority > temp->priority)
				{
					previous = current;
					current = current -> next;
					previous -> next = temp;
					temp -> next = current;
				}
			}
			
			while(t -> next != NULL)    //Traversing an array
			{
				t = t -> next;	//first t was at header then at this step value of t goes to next to next step until it is last node i.e its link part contains NULL value
			}
			t -> next = temp;	//Atlast the node created in the else part is linked to the last node
		}
	}
	
	t = header;
	while(t != NULL)
	{
		t -> display();
		t = t -> next;
	}
	return 0;
}


#include <iostream>

using namespace std;

class Node

{

	public :

	string task_name;

	int priority;

	int exe_time;

	Node *next;

	Node(string t, int p, int e)

	{

		task_name = t;

		priority = p;

		exe_time = e;

		next = NULL;

	}

	void display()

	{

		cout << "Task Name: " << task_name << ", Priority: " << priority << ", Execution Time: "

		<< exe_time << endl;

	}

};

int main()

{

	/*Node *header = new Node("t1",10,15);

	Node *temp = new Node("t2",11,5);

	header -> next = temp;

	// temp->display();

	header->display();

	header->next->display();*/

	int n;

	Node *header = NULL, *temp = NULL, *t;

	string tn;

	int p, e;

	cout << "Enter No. of Tasks: ";

	cin >> n; 

	for(int i=0; i<n; i++)

	{

		cout << "Enter Task Name : ";

		cin >> tn;

		cout << "Enter Priority : ";

		cin >> p;

		cout << "Enter Execution Time : ";

		cin >> e;

		

		if(header == NULL)	//Creates Header Node

		{

			header = new Node(tn,p,e);

		}

		else    //Creates Other Nodes

		{

			temp = new Node(tn,p,e);

			t = header;		//t contains address of header

			while(t -> next != NULL)    //Traversing an array

			{

				t = t -> next;	//first t was at header then at this step value of t goes to next to next step until it is last node i.e its link part contains NULL value

			}

			t -> next = temp;	//Atlast the node created in the else part is linked to the last node

		}

	}

	

	t = header;

	while(t != NULL)

	{

		t -> display();

		t = t -> next;

	}

	return 0;

}
