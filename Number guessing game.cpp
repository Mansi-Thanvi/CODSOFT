//09-07-2024 Mansi Thanvi
//project- Number guessing game
#include<iostream>
#include<cstdlib> //for random no. generaation
#include<ctime> //for generating different number each time.
using namespace std;

int main()
{
	//introdution
	cout<<"Hello and welcome to the number guessing game!"<<endl;
	cout<<"The rules are simple. You have to guess the secret number which can be any from 1 to 100."<<endl;
	cout<<"If you guessed it correct, you win and if you didn't then don't worry you can keep trying!"<<endl;
	cout<<"Let's BEGIN!!";
	
	char playagain = 'Y';
	//generating a random number.
	while(playagain == 'Y' || playagain == 'y')  //goto label so we can come back here if the player wants to play again
	{
	  	srand(time(0));
		int rnumber = (rand()%(100-1)+1); //rnumber - random number
		int pguess, i; //pguess - player guess
		char ch; //using this later.
		
		cout<<"Guess the number!\n";
		
		//game loop starts
		for(i=1; i<= 10; i++)
		{
			cout<<"\nEnter a number:"<<endl;   //Taking guess of the user
			cin>>pguess;
			
			if(pguess==rnumber)
			{
				cout<<"Correct!! You win!";
				break;
			}
			else
			{
				cout<<"Boo! You are incorrect!";
				if(pguess > rnumber)
				  cout<<"Your guess is bigger than the secret number.";
				else
				  cout<<"Your guess is smaller than the secret number.";
			}
			
			//this message occurs when loop runs 10 times and player still didn't win
			if(i>=10 && pguess!=rnumber)
			{
				cout<<"Would you like to continue? [Y/N]";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				  i = 1;
				else if(ch=='N'||ch=='n')
				  break;
				else
				  cout<<"Invalid choice, leaving game.";
			}
		}
		//play the game again?
	    cout<<"Game ends.\nThank you for playing. Do you want to play again? [Y/N]";
	    cin>>playagain;
    }
	
	
	return 0;
}
