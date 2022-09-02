#include<iostream>
using namespace std;
class Queue
{
    private:
        int fron,rear,arr[5];

        public:
            Queue()
            { rear=-1;
            fron=-1;
               for(int i=0;i<5;i++)arr[i]=0;
            }
            bool isfull()
            {
                if(rear==4)return true;
                else return false;
            }
            bool isEmpty()
            {
                if(fron==-1 && rear==-1)
                    return true ;
                else return false;

            }
            void enque(int val)
            {
                if(isfull()){
                    cout<<"QUeue is full\n";
                    return;
                }
                else  if(isEmpty())
                {
                    fron=0;
                    rear=0;
                    arr[rear]=val;
                }
                else
                {
                    rear++;
                    arr[rear]=val;
                }
            }
            int Deque()
            { int x=0;
                if(isEmpty()){
                    cout<<"queue is empty\n";
                    return 0;
                }
                else if(fron==rear)
                {
                   x= arr[fron];
                   arr[fron]=0;
                   fron=-1;
                   rear=-1;
                   return x;
                }
                else
                {   x=arr[fron];
                    arr[fron]=0;
                    fron++;
                    return x;
                }
            }
            int Count()
            { if(isEmpty())
            return 0;
                return rear-fron+1;
            }
            void display()
            {
                for(int i=0;i<5;i++)
                    cout<<arr[i]<<endl;
            }
};
int main()
{
    int option,valu;
    Queue q1;
    do{cout<<"ENter option\n";
    cout<<"1.isfull\n";
         cout<<"2.isempty\n";
       cout<<"3.enque\n";
    cout<<"4.deque\n";
    cout<<"5.count\n";
    cout<<"6.display\n";
    cout<<"7.clear\n";
    cout<<"0.exit\n";
    cin>>option;
    switch(option)
    {
        case 1:
            if(q1.isfull())
                cout<<"Full\n";
            else cout<<"Not full\n";
        break;
         case 2:
             if(q1.isEmpty())
                cout<<"Empty\n";
            else cout<<"Not\n";
        break;
         case 3:
             cin>>valu;
             q1.enque(valu);
        break;
         case 4:
             cout<<q1.Deque()<<endl;

        break;
         case 5:
             cout<<q1.Count()<<endl;
        break;
         case 6:
             q1.display();
        break;
         case 7:
             system("cls");
        break;
        default:
        break;
    }

    }while (option!=0);
    return 0;
}
