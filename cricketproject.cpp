#include <iostream>

using namespace std;

class Node{
	public :
	string batsman;
	string cat;
	int num;
	float run;
	float ball;
	float s_rate;
	string out;
	int choice;
	Node *head;
	Node *head1;
	Node *tail;
	Node *tail1;
	Node *next;
	Node *next1;
	Node *prev;
	string arr[3];
    int arr1[3];
    int arr2[3];
    int arr3[3];
    string arr4[3];
    string arr5[3];
    int arr6[3];
    int top;
    int front;
    int rear;
    string arr7[3];
    int arr8[3];
    int arr9[3];
    int arr10[10];
    
    


	
	Node(){
	 	head=NULL;
	 	tail=NULL;
	 	head1=NULL;
	 	tail1=NULL;
	 	top=-1;
	 	front=-1;
	 	rear=-1;
	 	for(int i=0; i<=9; i++){
	 		arr10[i]=0;
		 }
	 	
	 }
	 
	 

	 
	 void insert(string b , string c, int no){
	 	for(int i=1; i<=3; i++){
	 	Node *n=new Node();
	 	cout<<"Enter Player Name : ";
	 	cin>>batsman;
	 	b=batsman;
	 	n->batsman= b;
	 	cout<<"Enter Player Category : ";
	 	cin>>cat;
	 	c=cat;
	 	n->cat=c;
	 	cout<<"Enter Player Number : ";
	 	cin>>num;
	 	no=num;
	 	n->num=no;
	 	n->next = NULL;
	 	n->prev=NULL;
	 	if(head==NULL && tail==NULL){
	 		head=n;
	 		tail=n;
	 	}
	 	else {
	 		tail->next = n;
	 		n->prev=tail;
	 		tail = n;
	 	}
	 	}
	 	
	 }
	 
	 void replace(string b , string c , int no){
	 	
	 	Node *n=new Node();
	 	Node *temp;
	 	Node *curr;
	 	temp=head;
	 	string ib;
	 	cout<<"Enter the Name of Injured Player : ";
	 	cin>>ib;
	 	cout<<"Enter the Name of New Player : ";
	 	cin>>batsman;
	 	b=batsman;
	 	n->batsman=b;
	 	cout<<"Enter Category of New Player : ";
	 	cin>>cat;
	 	c=cat;
	 	n->cat=c;
	 	cout<<"Enter Number of New Player : ";
	 	cin>>num;
	 	no=num;
	 	n->num=no;
	 	n->next=NULL;
	 	n->prev=NULL;
	 	if(head->batsman==ib){
	 		head=n;
	 		n->next=temp->next;
	 		temp->next->prev=n;
	 		n->prev=NULL;
	 		delete(temp);
	 	}
	 	else if(temp->next->batsman==ib){ 
	 	curr=temp->next;
	 	n->next=curr->next;
	 	curr->next->prev=n;
	 	n->prev=temp;
	 	temp->next=n;
	 	delete(curr);
	 	}
	 	else if(tail->batsman==ib){
	 		temp=tail;
	 		temp->prev->next=n;
	 		n->prev=temp->prev;
	 		n->next=NULL;
	 		tail=n;
	 		delete(temp);
	 	}
	 	else{
	 		temp=temp->next;
	 	}
	 		 	 }
	 		 	 
	 		 	 void searchbatsmen(){
	 		 	 	Node *temp=new Node();
	 		 	 	temp=head;
	 	for(int i=0; i<3; i++){
	         	while(temp!=NULL){
	 		if(temp->cat=="Batsman")
			 {
	 			cout<<temp->batsman<<"\t"<<temp->cat<<endl;
	 			temp=temp->next;
	 			break;
	 		}
	 		else{
	 			temp=temp->next;
	 		}
	 	}
	 		 	 	
				   }
			}
			
			void searchbowlers(){
	 		 	 	Node *temp=new Node();
	 		 	 	temp=head;
	 	for(int i=0; i<3; i++){
	         	while(temp!=NULL){
	 		if(temp->cat=="Bowler")
			 {
	 			cout<<temp->batsman<<"\t"<<temp->cat<<endl;
	 			temp=temp->next;
	 			break;
	 		}
	 		else{
	 			temp=temp->next;
	 		}
	 	}
	 		 	 	
				   }
			}
			
			void searchbyname(){
				Node *temp=new Node();
	 		 	 	temp=head;
	 		 	 	string s_name;
				cout<<"Enter Player Name : ";
				cin>>s_name;	   
	         	while(temp!=NULL){
	 		if(temp->batsman==s_name)
			 {
	 			cout<<temp->batsman<<"\t"<<temp->cat<<endl;
	 			break;
	 		}
	 		else{
	 			temp=temp->next;
	 		}
				
			}
		}
		
		void searchbycat(){
				Node *temp=new Node();
	 		 	 	temp=head;
	 		 	 	string s_cat;
				cout<<"Enter Player Category : ";
				cin>>s_cat;	   
	         	while(temp!=NULL){
	 		if(temp->cat==s_cat)
			 {
	 			cout<<temp->batsman<<"\t"<<temp->cat<<endl;
	 			break;
	 		}
	 		else{
	 			temp=temp->next;
	 		}
				
			}
		}
		
		void searchbynum(){
				Node *temp=new Node();
	 		 	 	temp=head;
	 		 	 	int s_num;
				cout<<"Enter Player Number : ";
				cin>>s_num;	   
	         	while(temp!=NULL){
	 		if(temp->num==s_num)
			 {
	 			cout<<temp->batsman<<"\t"<<temp->cat<<endl;
	 			break;
	 		}
	 		else{
	 			temp=temp->next;
	 		}
				
			}
		}
			
			void searchallrounders(){
	 		 	 	Node *temp=new Node();
	 		 	 	temp=head;
	 	for(int i=0; i<3; i++){
	         	while(temp!=NULL){
	 		if(temp->cat=="AllRounder")
			 {
	 			cout<<temp->batsman<<"\t"<<temp->cat<<endl;
	 			temp=temp->next;
	 			break;
	 		}
	 		else{
	 			temp=temp->next;
	 		}
	 	}
	 		 	 	
				   }
			}
	 
	 void insert1(string b ,float r , float d ,float s,string o){
	 	Node *n=new Node();
	 	cout<<"Enter Batsman For Batting : ";
	 	cin>>batsman;
	 	b=batsman;
	 	n->batsman=b;
	 	cout<<"Enter Runs Scored : ";
	 	cin>>run;
	 	r=run;
	 	n->run=r;
	 	cout<<"Enter Balls Faced : ";
	 	cin>>ball;
	 	d=ball;
	 	n->ball=d;
	 	s_rate=(run/ball)*100;
	 	s=s_rate;
	 	n->s_rate=s;
	 	cout<<"Press 1 if Batsman is out OR Press 2 if not : ";
	 	cin>>choice;
	 	if(choice==1){
	 		string o_type;
	 		cout<<"Enter OUT Type : ";
	 		cin>>o_type;
	 		out=o_type;
	 		o=out;
	 		n->out=o;
	 	}
	 	else if(choice==2){
	 		out="NOTOUT";
	 		o=out;
	 		n->out=o;
	 	}
	 	else{
	 	}
	 	n->next1= NULL;
	 	if(head1==NULL && tail1==NULL){
	 		head1=n;
	 		tail1=n;
	 	}
	 	else {
	 		tail1->next1 = n;
	 		tail1 = n;
	 	}
	 	
	 }
	 
	 void current(){
	 	Node *temp=new Node();
	 	temp=head1;
	 	cout<<"Current Batsmen at Crease"<<endl;
	for(int i=0; i<2; i++){
		while(temp!=NULL){
	 		if(temp->out=="NOTOUT"){
	 			cout<<temp->batsman<<"\t"<<temp->run<<"*"<<"("<<temp->ball<<")"<<endl;
	 			temp=temp->next1;
	 			break;
	 		}
	 		else{
	 			temp=temp->next1;
	 		}
	 	}
	}
	 	
	 }
	 
	 void show(){
	 	Node *temp;
	 	temp=head;
	 	cout<<"NAME\tCATEGORY"<<endl;
	 	while(temp!=NULL){
	 		cout<<temp->batsman<<"\t"<<temp->cat<<endl;
	 		temp=temp->next;
	 	}
	 }
	 
	 void show1(){
	 	Node *temp;
	 	temp=head1;
	 	cout<<"Batsman\tTYPE\tRuns\tBalls\tStrike Rate"<<endl;
	 	while(temp!=NULL){
	 		cout<<temp->batsman<<"\t"<<temp->out<<"\t"<<temp->run<<"\t"<<temp->ball<<"\t"<<temp->s_rate<<endl;
	 		temp=temp->next1;
	 	}
	 }
	 
	       bool isFull(){
                 if(top==2)
                 return true;
          else
                return false;
      }	
     bool isEmpty(){
               if(top==-1)
               return true;
         else
               return false;
    }
          void push(string a){
                    if(!isFull()){
                    cout<<"Enter Player Name : ";
                    cin>>batsman;
                    a=batsman;
                       top++;
                   arr[top]=a;
          }
         else
        {
            cout<<"Team is FULL!!!!!"<<endl;
    }
          }
          
          void push4(string c){
                    if(!isFull()){
                    cout<<"Enter Batsman Name : ";
                    cin>>batsman;
                    c=batsman;
                       top++;
                   arr4[top]=c;
          }
         else
        {
            cout<<"Record is FULL!!!!!"<<endl;
    }
          }
      void push1(int n){
                    if(!isFull()){
                    cout<<"Enter Player  Number : ";
                    cin>>num;
                    n=num;
                       top++;
                   arr1[top]=n;
          }
         else
        {
            cout<<"Team is FULL!!!!!"<<endl;
    }
   }
   
    void push5(string c){
                    if(!isFull()){
                    cout<<"Enter Player Category : ";
                    cin>>cat;
                    c=cat;
                       top++;
                   arr5[top]=c;
          }
         else
        {
            cout<<"Team is FULL!!!!!"<<endl;
    }
}
          void push2(int r){
                    if(!isFull()){
                    cout<<"Enter Batsman Runs : ";
                    cin>>run;
                    r=run;
                       top++;
                   arr2[top]=r;
          }
         else
        {
            cout<<"Record is FULL!!!!!"<<endl;
    }
   }
           void push3(int b){
                    if(!isFull()){
                    cout<<"Enter Balls Faced : ";
                    cin>>ball;
                    b=ball;
                       top++;
                   arr3[top]=b;
          }
         else
        {
            cout<<"Record is FULL!!!!!"<<endl;
    }
   }
           void pop(){
                 if(!isEmpty()){ 
                 arr[top]="N/A";
                   top--;
              
     }
      else
    {
          cout<<"Team is EMPTY!!!!!"<<endl;
  }
   }
   
       void pop1(){
                 if(!isEmpty()){ 
                 arr1[top]=0;
                   top--;
             
     }
      else
    {
          cout<<"Team is EMPTY!!!!!"<<endl;
  }
   }
   void pop2(){
                 if(!isEmpty()){ 
                 arr2[top]=0;
                   top--;
              
     }
      else
    {
          cout<<"Record is EMPTY!!!!!"<<endl;
  }
   }
   void pop3(){
                 if(!isEmpty()){ 
                 arr3[top]=0;
                   top--;
     }
      else
    {
          cout<<"Record is EMPTY!!!!!"<<endl;
  }
   }
   void pop4(){
                 if(!isEmpty()){ 
                 arr4[top]="N/A";
                   top--;
     }
      else
    {
          cout<<"Record is EMPTY!!!!!"<<endl;
  }
   }
   
   void pop5(){
                 if(!isEmpty()){ 
                 arr5[top]="N/A";
                   top--;
     }
      else
    {
          cout<<"Record is EMPTY!!!!!"<<endl;
  }
   }
   
       
   
   
   

	        void showstack(){
     for(int i=0; i<=2 ;i++)
          cout<<arr[i]<<"\t";
       }	
       void showstack1(){
     for(int i=0 ; i<=2; i++)
          cout<<arr1[i]<<"\t\t";
       }
       void showstack2(){
       for(int i=0; i<=2; i++)
          cout<<arr2[i]<<"\t";
       }
       void showstack3(){
       for(int i=0; i<=2; i++)
          cout<<arr3[i]<<"\t";
       }
       void showstack4(){
       for(int i=0; i<=2; i++)
          cout<<arr4[i]<<"\t";
       }
       
       void showstack5(){
       	for(int i=0; i<=2; i++)
       	cout<<arr5[i]<<"\t";
	   }
	   
	   
	   
	      bool isFull1(){
		if(rear==2 && front==0)
		return true;
		else if(front==rear+1)
		return true;
		else
		return false;
	}
	bool isEmpty1(){
		if(front==-1)
		return true;
		else
		return false;
	}
	
	void Enqueue(string a){
		if(!isFull1()){
		if(front==-1){
			front=0;
		}
		cout<<"Enter Player Name : ";
		cin>>batsman;
		a=batsman;
		rear=(rear+1)%3;
		arr[rear]=a;
		}
		else {
			cout<<"Team is FULL!!!!!"<<endl;
		}
	}
	
	   void Enqueue1(int n){
		if(!isFull1()){
		if(front==-1){
			front=0;
		}
		cout<<"Enter Player Number : ";
		cin>>num;
		n=num;
		rear=(rear+1)%3;
		arr1[rear]=n;
		}
		else {
			cout<<"Team is FULL!!!!!"<<endl;
		}
	}
	
	void Enqueue5(string c){
		if(!isFull1()){
		if(front==-1){
			front=0;
		}
		cout<<"Enter Player Category : ";
		cin>>cat;
		c=cat;
		rear=(rear+1)%3;
		arr5[rear]=c;
		}
		else {
			cout<<"Team is FULL!!!!!"<<endl;
		}
	}
	
	void Enqueue2(int r){
		if(!isFull1()){
		if(front==-1){
			front=0;
		}
		cout<<"Enter Batsman Runs : ";
		cin>>run;
		r=run;
		rear=(rear+1)%3;
		arr2[rear]=r;
		}
		else {
			cout<<"Record is FULL!!!!!"<<endl;
		}
	}
	
	void Enqueue3(int b){
		if(!isFull1()){
		if(front==-1){
			front=0;
		}
		cout<<"Enter Batsman Balls Faced : ";
		cin>>ball;
		b=ball;
		rear=(rear+1)%3;
		arr3[rear]=b;
		}
		else {
			cout<<"Record is FULL!!!!!"<<endl;
		}
	}
	
		void Enqueue4(string z){
		if(!isFull1()){
		if(front==-1){
			front=0;
		}
		cout<<"Enter Player Name : ";
		cin>>batsman;
		z=batsman;
		rear=(rear+1)%3;
		arr4[rear]=z;
		}
		else {
			cout<<"Record is FULL!!!!!"<<endl;
		}
	}
	
	void Dequeue(){
		if(rear==front){
			rear=-1;
			front=-1;
		}
		else if(!isEmpty1()){	
			arr[front]="N/A";
			front=(front+1)%3;
		}
		else
		{
			cout<<"Team is Empty"<<endl;
		}
	}
	
	void Dequeue1(){
		if(rear==front){
			rear=-1;
			front=-1;
		}
		else if(!isEmpty1()){	
			arr1[front]=0;
			front=(front+1)%3;
		}
		else
		{
			cout<<"Team is Empty"<<endl;
		}
	}
	  void Dequeue5(){
		if(rear==front){
			rear=-1;
			front=-1;
		}
		else if(!isEmpty1()){	
			arr5[front]="N/A";
			front=(front+1)%3;
		}
		else
		{
			cout<<"Team is Empty"<<endl;
		}
	}
	
	 void Dequeue2(){
		if(rear==front){
			rear=-1;
			front=-1;
		}
		else if(!isEmpty1()){	
			arr2[front]=0;
			front=(front+1)%3;
		}
		else
		{
			cout<<"Record is Empty"<<endl;
		}
	}
	
	void Dequeue3(){
		if(rear==front){
			rear=-1;
			front=-1;
		}
		else if(!isEmpty1()){	
			arr3[front]=0;
			front=(front+1)%3;
		}
		else
		{
			cout<<"Record is Empty"<<endl;
		}
	}
	
	void Dequeue4(){
		if(rear==front){
			rear=-1;
			front=-1;
		}
		else if(!isEmpty1()){	
			arr4[front]="N/A";
			front=(front+1)%3;
		}
		else
		{
			cout<<"Record is Empty"<<endl;
		}
	}
	
	void showqueue(){
		for(int i=0; i<=2; i++)
		cout<<arr[i]<<"\t";
	}
	void showqueue1(){
		for(int i=0; i<=2; i++)
		cout<<arr1[i]<<"\t\t";
	}
	void showqueue2(){
		for(int i=0; i<=2; i++)
		cout<<arr2[i]<<"\t";
	}
	void showqueue3(){
		for(int i=0; i<=2; i++)
		cout<<arr3[i]<<"\t";
	}
	void showqueue4(){
		for(int i=0; i<=2; i++)
		cout<<arr4[i]<<"\t";
	}
	void showqueue5(){
		for(int i=0; i<=2; i++)
		cout<<arr5[i]<<"\t";
	}
	
	void overs(){
		for(int i=1; i<=3; i++){
		
		cout<<"Enter Runs Scored in Over "<<i<<" : ";
		cin>>arr6[i];
	}
}
	void showover(){
		for(int i=1; i<=3; i++){
		
		cout<<"Runs in Over "<<i<<" ";
		cout<<arr6[i]<<endl;
	}
}
      void selectionsortass(){
			for(int i=1; i<=3; i++){
				int index=i;
				int min=arr6[i];
				for(int j=i+1; j<=3; j++){
					if(min>arr6[j]){
						min=arr6[j];
						index=j;
					}
					
				}
				int temp;
				temp=arr6[i];
				arr6[i]=min;
				arr6[index]=temp;
			}
		}
		
		void selectionsortdss(){
			for(int i=1; i<=3; i++){
				int index=i;
				int min=arr6[i];
				for(int j=i+1; j<=3; j++){
					if(min<arr6[j]){
						min=arr6[j];
						index=j;
					}
					
				}
				int temp;
				temp=arr6[i];
				arr6[i]=min;
				arr6[index]=temp;
			}
		}
		
		void insertionsortass(){
			for(int i=1; i<=3; i++){
				int key = arr6[i];
				int j=i-1;
				while(j>=1 && key<arr6[j]){
					arr6[j+1]=arr6[j];
					j--;
				}
				arr6[j+1]=key;
			}
		}
		
		void insertionsortdss(){
			for(int i=1; i<=3; i++){
				int key = arr6[i];
				int j=i-1;
				while(j>=1 && key>arr6[j]){
					arr6[j+1]=arr6[j];
					j--;
				}
				arr6[j+1]=key;
			}
		}

		
		void showsorted(){
			for(int i=1; i<=3; i++)
			cout<<arr6[i]<<endl;
		}
		
		
		void inputpl(){
			
			cout<<"Enter 3 Bowlers Data"<<endl;
			for(int i=0; i<=2; i++){
			
		cout<<"Enter Bowler Name : ";
		cin>>arr7[i];
		cout<<"Enter Bowler Number : ";
		cin>>arr8[i];
		}
	}
	
	void input1(){
			
			cout<<"Enter 3 Players Data"<<endl;
			for(int i=0; i<=2; i++){

		cout<<"Enter Player Number : ";
		cin>>arr9[i];
		}
	}
	
	void linearsearch(string a){
         string player;
			cout<<"Enter Bowler Name to Search : ";
			cin>>player;
			a=player;
			for(int i=0; i<=2; i++){
			
			if(arr7[i]==a){
				cout<<"Player Found"<<endl;
				break;
			}
			else {
				
			}
		}
	}
	
	void linearsearch1(int n){
         int number;
			cout<<"Enter Bowler Number to Search : ";
			cin>>number;
			n=number;
			for(int i=0; i<=2; i++){
			
			if(arr8[i]==n){
				cout<<"Player Found"<<endl;
				break;
			}
			else {
			
			}
		}
		
	}
	
	void binarysearch(int b){
		int number;
			cout<<"Enter Player Number to search : ";
			cin>>number;
			b=number;
		int midl;
		midl=3/2;
		for(int i=0; i<=2; i++){
			if(arr9[midl]==b){
				cout<<"Player Found"<<endl;
				break;
			}
			else if(arr9[midl]>b){
				for(int j=midl; j>=0; j--){
					if(arr9[j]==b){
						cout<<"Player Found"<<endl;
						break;
					}
					else{
						
					}
				}
			}
			else if(arr9[midl]<b){
				for( int k=midl; k<=3; k++){
					if(arr9[k]==b){
						cout<<"Player Found"<<endl;
						break;
					}
					else {
						
					}
				}
			}
			else{
				
				
			}
			break;
		}
		
	}
	
	void hashinput(){
		for(int i=0; i<=4; i++){
			cout<<"Enter Runs Conceded by Bowler "<<i+1<<" : ";
			cin>>arr10[i];
		}
	}
	
	void showprobing(){
		for(int i=0; i<=9; i++)
		{
			cout<<arr10[i]<<endl;
		}
	}
	
	void linearprobing(int a){
	int index;
	index=a%10;
	if(arr10[index]!=0){
		for(int i=0;i<=9;i++){
			index=(a+i)%10;
			if(arr10[index]==0){
				arr10[index]=a;
				break;
		    }
	    }
		}
	else{
	
			
}
}
     
     void quadraticprobing(int b){
	int p;
	p=b%10;
	if(arr10[p]!=0){
		for(int i=0;i<=9;i++){
			p=(b+(i*i))%10;
			if(arr10[p]==0){
				arr10[p]=b;
				break;
		    }
	    }
		}
	else{
	
	
}
}

	
};


int main(int argc, char** argv) {
	
	cout<<"    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    \n";
    cout<<"   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX   \n";
    cout<<"  XX  XXXXXXXXX  XXXXXXX       XXXXXXXXXX       XXXXXXXXXXXXX     XXXXXX       XXXXX  XXXXXXX     XXXXXXX  XXXXX  XXXX         XXXXXX             XXXXXXX  \n";
    cout<<" XXX  XXXXXXXXX  XXXXX  XXXXXXX  XXXXXX  XXXXXXXXXXXXXXXXXXX  XXXX  XXXX  XXXXX  XXXXXXXXXXX  XXXX  XXXXX  XXX  XXXXXX  XXXXXXXXXXXXXXXXXX   XXXXXXXXXXXXX \n";
    cout<<"XXXX  XXXXXXXXX  XXXX  XXXXXXXXX  XXXX  XXXXXXXXXXXXXXXXXXX  XXXXXXXXXXX  XXX  XXXXX  XXXXX  XXXXXXXXXXXX  X  XXXXXXXX         XXXXXXXXXXX   XXXXXXXXXXXXXX\n";
    cout<<"XXXX  XXXXXXXXX  XXXX  XXXXXXXXX  XXXX  XXX     XXXXXXXXXXX  XXXXXXXXXXX  X  XXXXXXX  XXXXX  XXXXXXXXXXXX  X  XXXXXXXX  XXXXXXXXXXXXXXXXXX   XXXXXXXXXXXXXX\n";
    cout<<" XXXX  XXXXXXX  XXXXXX  XXXXXXX  XXXXXX  XXXXX  XXXXXXXXXXX   XXXX  XXXX  XX  XXXXXX  XXXXXX  XXXX  XXXXX  XX  XXXXXXX  XXXXXXXXXXXXXXXXXX   XXXXXXXXXXXXX \n";
    cout<<"  XXXXX       XXXXXXXXXX       XXXXXXXXXX       XXXXXXXXXXXXX      XXXXX  XXX  XXXXX  XXXXXXX     XXXXXXX  XXXX  XXXXX         XXXXXXXXXXX   XXXXXXXXXXXX  \n";
    cout<<"   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    \n";
    cout<<"    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX   \n\n";
   cout<<"\n\n"<<endl;
    cout<<"\t\t\t\t\t******************************************************************"<<endl;
   cout<<"\t\t\t\t\t|__________________________DEVELOPER______________________________|"<<endl;
   cout<<"\t\t\t\t\t*******************************************************************"<<endl;
   cout<<"\t\t\t\t\t|                                                                 |"<<endl;
   cout<<"\t\t\t\t\t|  PRESENTED BY:                                                  |"<<endl; 
   cout<<"\t\t\t\t\t|               Sher Afgan                   20011598-041         |"<<endl;
   cout<<"\t\t\t\t\t|                                                                 |"<<endl; 
   cout<<"\t\t\t\t\t|   SECTION-A                                                     |"<<endl;
   cout<<"\t\t\t\t\t|   PRESENTED TO:                                                 |"<<endl;
   cout<<"\t\t\t\t\t|                Ms.Reema                                         |"<<endl;
   cout<<"\t\t\t\t\t|                                                                 |"<<endl;
   cout<<"\t\t\t\t\t*******************************************************************"<<endl;
   cout<<"\t\t\t\t\t___________________________________________________________________"<<endl;
   cout<<"\t\t\t\t\t*******************************************************************"<<endl;
   system("pause");
   
   
   Node N,N1,N2,N3,N4,N5;
   int input;
   string t_name;
   
    

   while(1){
   	
   	system("cls");
   	cout<<"\n\n\t\t\t\t\t**********************************************"<<endl;
   	cout<<"\t\t\t\t\t*      Press 1 to Enter Data in Stack        *"<<endl;
   	cout<<"\t\t\t\t\t*      Press 2 to Enter Data in Queue        *"<<endl;
   	cout<<"\t\t\t\t\t*      Press 3 to Enter Data in Linkedlist   *"<<endl;
   	cout<<"\t\t\t\t\t*      Press 4 for Sorting                   *"<<endl;
   	cout<<"\t\t\t\t\t*      Press 5 for Searching                 *"<<endl;
   	cout<<"\t\t\t\t\t*      Press 6 for Hashing                   *"<<endl;
   	cout<<"\t\t\t\t\t*      Press 7 to Exit                       *"<<endl;
   	cout<<"\t\t\t\t\t**********************************************"<<endl;
   	cin>>input;
   	
   	switch(input){
   		
   		case 1:
   			while(1){
   			int choiceb;
   			system("cls");
   	cout<<"\n\n\t\t\t\t\t**********************************************"<<endl;
   	cout<<"\t\t\t\t\t*       Press 1 to Enter Team                *"<<endl;
   	cout<<"\t\t\t\t\t*       Press 2 to See Team                  *"<<endl;
   	cout<<"\t\t\t\t\t*       Press 3 to Enter Batting Record      *"<<endl;
   	cout<<"\t\t\t\t\t*       Press 4 to see ScoreCard             *"<<endl;
   	cout<<"\t\t\t\t\t*       Press 5 to Delete Data               *"<<endl;
   	cout<<"\t\t\t\t\t*       Press 6 to Go to Main Menu           *"<<endl;
   	cout<<"\t\t\t\t\t**********************************************"<<endl;
   	cin>>choiceb;
   	if(choiceb==1){
   		system("cls");
   		cout<<"Enter Team Name : ";
   		cin>>t_name;
   		for(int i=0 ; i<=2; i++){
		N.push("a");
		N5.push5("c");
		N1.push1('n');
	}
	cout<<"**********************"<<endl;
   		cout<<"Team Has Been Entered"<<endl;
   		system("pause");	
	   }
	   else if(choiceb==2){
	   	
	   		system("cls");
   	cout<<"\t|| "<<t_name<<"  ||"<<endl;
   	cout<<"Batsmen   => ";
	N.showstack();
	cout<<endl;
	cout<<"Category ==> ";
	N5.showstack5();
	cout<<endl;
	cout<<"Numbers  ==> ";
	N1.showstack1();
	cout<<endl;
	system("pause");
	   }
	   else if(choiceb==3){
	   	system("cls");
	   	cout<<"\t|| "<<t_name<<"  ||"<<endl;
	   	for(int i=0; i<=2; i++){
    	N4.push4("c");
    	N2.push2('r');
    	N3.push3('b');
    	
	}
	system("pause");
	   }
	   
	   else if(choiceb==4){
	   	system("cls");
	cout<<"\t|| "<<t_name<<"  ||"<<endl;
	cout<<"\tSCORECARD"<<endl;
    cout<<"Batsmen ==> ";
    N4.showstack4();
    cout<<endl;
    cout<<"Runs    ==> ";
    N2.showstack2();
    cout<<endl;
    cout<<"Balls   ==> ";
    N3.showstack3();
    cout<<endl;
        	system("pause");
	   }
	   else if(choiceb==5){
	   	int choice0;
	   	system("cls");
	   	cout<<"Press 1 to Delete Data from Team"<<endl;
	   	cout<<"Press 2 to Delete Data from ScoredCard"<<endl;
	   	cin>>choice0;
	   	if(choice0==1){
	   		N.pop();
	   		N5.pop5();
	   		N1.pop1();
	   		cout<<"**********************************"<<endl;
	   		cout<<"Last Player Record has been Deleted"<<endl;
	   	
		   }
		   else if(choice0==2){
		   	N4.pop4();
		   	N2.pop2();
		   	N3.pop3();
		   	cout<<"**********************************"<<endl;
	   		cout<<"Last Player Record has been Deleted"<<endl;
		   }
		   	system("pause");
	   }
	   else if(choiceb==6){
	   	break;
	   }
	   else{
	   	cout<<"***********"<<endl;
		cout<<"Wrong Input"<<endl;
	   }
}
	   break;
	   
	   case 2 :
	   	while(1){
		   
	   	int choicec;
	   	system("cls");
	cout<<"\n\n\t\t\t\t\t**********************************************"<<endl;
	cout<<"\t\t\t\t\t*        Press 1 to Enter Team               *"<<endl;
   	cout<<"\t\t\t\t\t*        Press 2 to See Team                 *"<<endl;
   	cout<<"\t\t\t\t\t*        Press 3 to Enter Batting Record     *"<<endl;
   	cout<<"\t\t\t\t\t*        Press 4 to see ScoreCard            *"<<endl;
   	cout<<"\t\t\t\t\t*        Press 5 to Delete Data              *"<<endl;
   	cout<<"\t\t\t\t\t*        Press 6 to Go to Main Menu          *"<<endl;
   	cout<<"\t\t\t\t\t**********************************************"<<endl;
   	cin>>choicec;
   	if(choicec==1){
   		system("cls");
   		cout<<"Enter Team Name : ";
   		cin>>t_name;
   		for(int i=0; i<=2; i++){
    	N.Enqueue("a");
    	N5.Enqueue5("c");
    	N1.Enqueue1('n');
	}
	cout<<"**********************"<<endl;
   		cout<<"Team Has Been Entered"<<endl;
   		system("pause");
	   }
	   
	   else if(choicec==2){
	   	system("cls");
   	cout<<"\t|| "<<t_name<<"  ||"<<endl;
   	cout<<"Batsmen   ==> ";
	N.showqueue();
	cout<<endl;
	cout<<"Category ==> ";
	N5.showqueue5();
	cout<<endl;
	cout<<"Numbers  ==> ";
	N1.showqueue1();
	cout<<endl;
	system("pause");
	   }
	   
	   else if(choicec==3){
	   	system("cls");
	   	cout<<"\t|| "<<t_name<<"  ||"<<endl;
	   	for(int i=0; i<=2; i++){
    	N4.Enqueue4("z");
    	N2.Enqueue2('r');
    	N3.Enqueue3('b');
	}
	system("pause");
	   }
	   
	   else if(choicec==4){
	   	system("cls");
	cout<<"\t|| "<<t_name<<"  ||"<<endl;
	cout<<"\tSCORECARD"<<endl;
	cout<<"Batsmen ==> ";
	N4.showqueue4();
	cout<<endl;
	cout<<"Runs    ==> ";
	N2.showqueue2();
	cout<<endl;
	cout<<"Balls   ==> ";
	N3.showqueue3();
	cout<<endl;
	system("pause");
	   }
	   
	   else if(choicec==5){
	   	int choice00;
	   	system("cls");
	   	cout<<"Press 1 to Delete Data from Team"<<endl;
	   	cout<<"Press 2 to Delete Data from ScoredCard"<<endl;
	   	cin>>choice00;
	   	if(choice00==1){
	   		N.Dequeue();
	   		N5.Dequeue5();
	   		N1.Dequeue1();
	   		cout<<"**********************************"<<endl;
	   		cout<<"1st Player Record has been Deleted"<<endl;
		   }
		   else if(choice00==2){
		   	N4.Dequeue4();
		   	N2.Dequeue2();
		   	N3.Dequeue3();
		   	cout<<"**********************************"<<endl;
		   	cout<<"1st Player record has been Deleted"<<endl;
		   }
		   system("pause");
	   	
	   	
	   }
	   else if(choicec=6){
	   	break;
	   }
	   else{
	   	cout<<"***********"<<endl;
		cout<<"Wrong Input"<<endl;
	   	
	   }
}
	   break;
   	
   			
   		case 3:
   			while(1){
			   
   			int choicea;
   			system("cls");
   	cout<<"\n\n\t\t\t\t\t**********************************************"<<endl;
   	cout<<"\t\t\t\t\t*         Press 1 to Enter Team              *"<<endl;
   	cout<<"\t\t\t\t\t*         Press 2 to See Team                *"<<endl;
   	cout<<"\t\t\t\t\t*         Press 3 to Enter Batting Record    *"<<endl;
   	cout<<"\t\t\t\t\t*         Press 4 to see ScoreCard           *"<<endl; 
   	cout<<"\t\t\t\t\t*         Press 5 to Search Data             *"<<endl;
   	cout<<"\t\t\t\t\t*         Press 6 to Replace Payer           *"<<endl;
   	cout<<"\t\t\t\t\t*         Press 7 to Go to Main Menu         * "<<endl;
   	cout<<"\t\t\t\t\t**********************************************"<<endl;
   	cin>>choicea;
   	if(choicea==1){
   		
   		system("cls");
   		cout<<"Enter Team Name : ";
   		cin>>t_name;
   		N.insert("b","c",'no');
   		cout<<"**********************"<<endl;
   		cout<<"Team Has Been Entered"<<endl;
   		system("pause");
	   }
	   else if(choicea==2){
	   	
	   	system("cls");
   			cout<<"\t|| "<<t_name<<"  ||"<<endl;
   			N.show();
   			system("pause");
	   }
	   
	   else if(choicea==3){
	   	
	   	system("cls");
	       N.insert1("b",'r','d','s',"o");
	       N.insert1("b",'r','d','s',"o");
	       N.insert1("b",'r','d','s',"o");
	       system("pause");
	   }
	   else if(choicea==4){
	   	
	   	system("cls");
	   	cout<<"\t|| "<<t_name<<"  ||"<<endl;
	    	cout<<"SCORECARD"<<endl;
        	N.show1();
        	system("pause");
	   }
	   else if(choicea==5){
	   	
	   	system("cls");
            int choicee;
            cout<<"Press 1 to Search Single Player"<<endl;
            cout<<"Press 2 to Search Multiple Players"<<endl;
            cout<<"Press 3 to Search Current Batsmen at Crease"<<endl;
            cin>>choicee;
            if(choicee==1){
            	system("cls");
            	int choiceee;
            	cout<<"Press 1 to Search Player By Name"<<endl;
            	cout<<"Press 2 to Search Player By Category"<<endl;
            	cout<<"Press 3 to Search Player By Number"<<endl;
            	cin>>choiceee;
            	cout<<"**********************************"<<endl;
            	if(choiceee==1){
            		N.searchbyname();
				}
				else if(choiceee==2){
					N.searchbycat();
				}
				else if(choiceee==3){
					N.searchbynum();
				}
				else {
					cout<<"Wrong Input"<<endl;
				}
				system("pause");
			}
			else if(choicee==2){
				system("cls");
				int choiceeee;
            	cout<<"Press 1 to Search Batsmen of Team"<<endl;
            	cout<<"Press 2 to Search Bowlers of Team"<<endl;
            	cout<<"Press 3 to Search All-Rounders of Team"<<endl;
            	cin>>choiceeee;
            	cout<<"************************************"<<endl;
            	if(choiceeee==1){
            		N.searchbatsmen();
				}
				else if(choiceeee==2){
					N.searchbowlers();
				}
				else if(choiceeee==3){
					N.searchallrounders();
				}
				else {
					cout<<"Wrong Input"<<endl;
				}
				system("pause");
			}
			else if(choicee==3){
				cout<<"*************************"<<endl;
				N.current();
				system("pause");
			}
			else {
				cout<<"Wrong Input"<<endl;
				system("pause");
			}
	   }
	   else if(choicea==6){
	   	system("cls");
			N.replace("b","c",'no');
			cout<<"Team Has Been Updated"<<endl;
			system("pause");
	   	
	   }
	   else if(choicea==7){
	   	break;
	   }
	   else{
	   	cout<<"***********"<<endl;
		cout<<"Wrong Input"<<endl;
	   }
}
	   break;
	   
	   case 4 :
	   	
	   	while(1){
	
	   	int choiced;
	   	system("cls");
	   	cout<<"\n\n\t\t\t\t\t************************************************"<<endl;
	   	cout<<"\t\t\t\t\t*          Press 1 for Insertion Sorting       *"<<endl;
	   	cout<<"\t\t\t\t\t*          Press 2 for Selection Sorting       *"<<endl;
	   	cout<<"\t\t\t\t\t*          Press 3 to Go to Main Menu          *"<<endl;
	   	cout<<"\t\t\t\t\t************************************************"<<endl;
	   	cin>>choiced;
	   	if(choiced==1){
	   		system("cls");
	   		int choiceass;
	   		N.overs();
	   		cout<<"************"<<endl;
            N.showover();
            cout<<"*************"<<endl;
            cout<<"Press 1 to see Runs in Ascending Order"<<endl;
            cout<<"Prsee 2 to see Runs in Descending Order"<<endl;
            cin>>choiceass;
            if(choiceass==1){
            	N.insertionsortass();
            	cout<<"*********************"<<endl;
                N.showsorted();
                system("pause");
			}
			else if(choiceass==2){
               N.insertionsortdss();
               cout<<"**********************"<<endl;
               N.showsorted();
               system("pause");
			}
		   }
		   else if(choiced==2){
		   	system("cls");
	   		int choicedss;
	   		N.overs();
	   		cout<<"************"<<endl;
            N.showover();
            cout<<"*************"<<endl;
            cout<<"Press 1 to see Runs in Ascending Order"<<endl;
            cout<<"Prsee 2 to see Runs in Descending Order"<<endl;
            cin>>choicedss;
            if(choicedss==1){
            	N.selectionsortass();
            	cout<<"**********"<<endl;
                N.showsorted();
                system("pause");
			}
			else if(choicedss==2){
               N.selectionsortdss();
               cout<<"**********"<<endl;
               N.showsorted();
               system("pause");
			}
		   }
		   else if(choiced==3){
		   	break;
		   }
		   else{
		   	cout<<"***********"<<endl;
			cout<<"Wrong Input"<<endl;
		   }
	}
		   
		   break;
		   
		   case 5 :
		   	while(1){
		   		system("cls");
		   		int choices,choicess,choicesss,choicessss;
		   		cout<<"\n\n\t\t\t\t\t**********************************************"<<endl;
		   		cout<<"\t\t\t\t\t*          Press 1 Linear Searching          *"<<endl;
		   		cout<<"\t\t\t\t\t*          Press 2 Binary Searching          *"<<endl;
		   		cout<<"\t\t\t\t\t*          Press 3 to Go to Main Menu        *"<<endl;
		   		cout<<"\t\t\t\t\t**********************************************"<<endl;
		   		cin>>choices;
		   		if(choices==1){
		   			system("cls");
		   			cout<<"Press 1 to Enter Data"<<endl;
		   			cout<<"Press 2 to Search Data"<<endl;
		   			cin>>choicess;
		   			if(choicess==1){
		   				N.inputpl();
					   }
					   else if(choicess==2){
					   	system("cls");
					   	cout<<"Press 1 to Search by Name"<<endl;
					   	cout<<"Press 2 to Search by Number"<<endl;
					   	cin>>choicesss;
					   	if(choicesss==1){
					   		N.linearsearch("a");
						   }
						   else if(choicesss==2){
						   	N.linearsearch1('a');
						   }
					   }
				   }
				   else if(choices==2){
				   	system("cls");
				   	cout<<"Press 1 to Enter Data"<<endl;
		   			cout<<"Press 2 to Search Data"<<endl;
		   			cin>>choicessss;
		   			if(choicessss==1){
		   				N.input1();
					   }
					   else if(choicessss==2){
					   	N.binarysearch('b');
					   }
				   }
				   else if(choices==3){
				   	break;
				   }
				   system("pause");
			   }
		   		break;
		   		
		   		case 6:
		   			while(1){
		   				int choiceq,choiceqq,choiceqqq;
		   				system("cls");
		   				cout<<"\n\n\t\t\t\t\t*************************************************"<<endl;
		   				cout<<"\t\t\t\t\t*           Press 1 for Linear Probing          *"<<endl;
		   				cout<<"\t\t\t\t\t*           Press 2 for Quadratic Probing       *"<<endl;
		   				cout<<"\t\t\t\t\t*           Press 3 to Go to Main Menu          *"<<endl;
		   				cout<<"\t\t\t\t\t*************************************************"<<endl;
		   				cin>>choiceq;
		   				if(choiceq==1){
		   					system("cls");
		   					cout<<"Press 1 to Enter Data"<<endl;
		   					cout<<"Press 2 for Data Hashing"<<endl;
		   					cin>>choiceqq;
		   					if(choiceqq==1){
		   						cout<<"*****************"<<endl;
		   						N.hashinput();
							   }
							   else if(choiceqq==2){
							   	N.linearprobing('a');
							   	cout<<"******************"<<endl;
							   	cout<<"LINEAR PROBING"<<endl;
							   	N.showprobing();
							   }
						   }
						   else if(choiceq==2){
						   	system("cls");
						   	cout<<"Press 1 to Enter Data"<<endl;
		   					cout<<"Press 2 for Data Hashing"<<endl;
		   					cin>>choiceqqq;
		   					if(choiceqqq==1){
		   						cout<<"*******************"<<endl;
		   						N.hashinput();
							   }
							   else if(choiceqqq==2){
							   	N.quadraticprobing('b');
							   	cout<<"*********************"<<endl;
							   	cout<<"QUADRATIC PROBING"<<endl;
							   	N.showprobing();
							   }
						   }
						   else if(choiceq==3){
						   	break;
						   }
		   				system("pause");
					   }
					   break;
					   
					   case 7:
					   	exit(0);
			 
	    default :
		{
			cout<<"***********"<<endl;
			cout<<"Wrong Input"<<endl;
		 }		  
	   	
	   }
   }

   
 

	return 0;
}
