#include<iostream>
// #include<queue>
#include<string>
using namespace std;


// int main(){

// 	queue<int> q;

// 	q.push(10);
// 	cout<<"front element : "<<q.front()<<endl;
// 	q.push(20);
// 	cout<<"front element : "<<q.front()<<endl;
// 	q.push(30);
// 	cout<<"front element : "<<q.front()<<endl;

// 	cout<<"size of queue : "<<q.size()<<endl;

// 	q.pop();
// 	if(q.empty()){
// 		cout<<"queue is empty"<<endl;
// 	}
// 	else{
// 		cout<<"queue is not empty"<<endl;
// 	}
// }



//queue using array.
class queue{
	public:
	int *arr;
	int front;
	int rear;
	int size;

	queue(){
		size=10001;
		arr=new int(size);
		front=0;
		rear=0;
	}

	void enqueue(int data){

		if(rear==size){
			cout<<"queue is full";
		}
		else{
			arr[rear]=data;
			rear++;
		}
	}

	int dequeue(){
		if(front==rear){
			cout<<"queue is empty"<<endl;
		}
		else{
			arr[front]=-1;
			front++;
			if(front==rear){
				front=0;
				rear=0;
			}
		}
	}

	int empty(){
		if(front==rear){
			cout<<"queue is empty";
		}
		else{
			cout<<"queue is not empty";
		}
	}

	int top(){
		if(front==rear){
			cout<<"queue is empty";
		}
		else{
			cout<<arr[front]<<endl;
		}
	}
};

int main(){
	queue q;
	q.enqueue(10);
	q.enqueue(20);

	q.top();
}
