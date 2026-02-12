#include<iostream>
using namespace std;

int stack[100];
int top=-1;
int size;

int main()
{
    int ch,x;

    cout<<"Enter size of stack: ";
    cin>>size;

    do{
        cout<<"\n1.Push\n2.Pop\n3.Top\n4.isEmpty\n5.isFull\n6.Exit\n";
        cout<<"Enter choice: ";
        cin>>ch;

        if(ch==1)
        {
            if(top==size-1)
                cout<<"Stack Full\n";
            else
            {
                cout<<"Enter element: ";
                cin>>x;
                top++;
                stack[top]=x;
            }
        }
        else if(ch==2)
        {
            if(top==-1)
                cout<<"Stack Empty\n";
            else
            {
                cout<<"Deleted element "<<stack[top]<<endl;
                top--;
            }
        }
        else if(ch==3)
        {
            if(top==-1)
                cout<<"Stack Empty\n";
            else
                cout<<"Top element "<<stack[top]<<endl;
        }
        else if(ch==4)
        {
            if(top==-1)
                cout<<"Stack is Empty\n";
            else
                cout<<"Stack is Not Empty\n";
        }
        else if(ch==5)
        {
            if(top==size-1)
                cout<<"Stack is Full\n";
            else
                cout<<"Stack is Not Full\n";
        }

    }while(ch!=6);

    return 0;
}
