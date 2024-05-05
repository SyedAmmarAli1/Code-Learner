#include<iostream>
#include<string>
#include<iomanip>
#include<Windows.h>
#include<fstream>
#include<graphics.h>

using namespace std;
class CodeLearner {
protected:
	string choice;
public:
	void Welcome()
	{

		cout << "\t\t************" << endl;
		cout << endl;
		cout << "\t\tWelcome to The Code Learner App designed by Tashad,Sadia,Asfand,Ammar" << endl;
		cout << endl;
		cout << "\t\tHow do you want to continue?" << endl;
		cout << "\t\t1.Admin" << endl;
		cout << "\t\t2. Student" << endl;
		cout << "\t\t3. Parent" << endl;
	}
};

class age11_15
{
public:
	void basic()
	{
		system("cls");
		cout << setw(25) << "***" << endl
			<< setw(25) << "*       BASIC LEVEL           *" << endl
			<< setw(25) << "*     Arithmetic Operator     *" << endl
			<< setw(25) << "***" << endl << endl;
		Sleep(1000);
		cout << "Today, we're going to take you on a programming journey! " << endl;
		Sleep(1000);
		cout << "So, lets go." << endl;
		Sleep(1000);
		cout << "I hope you have some basic knowlage about programming." << endl << "today we are going to learn about some arithmetic operators in c++."
			<< "by using them we perform basic calculations in our program." << endl;
		Sleep(1000);
		cout << "In math we know which sign is use for spesific arithmetic operations. Same is the case with programming. " << endl
			<< "Here is also some symbols use for performing arithmetic operations" << endl;
		Sleep(1000);
		cout << "\t+ for addition" << endl
			<< "\t- for subtraction" << endl
			<< "\t* for multiplication"
			<< "\t/ for division" << endl
			<< "\t% for modulus(reminder in division)" << endl;
		Sleep(2000);
		Sleep(1000);
		cout << endl << endl << "How to write code?" << endl
			<< "\tfirst_variable operator second_veriable;" << endl << endl;
		Sleep(1000);
		cout << "---------Code Example---------" << endl << endl
			<< "#include <iostream>" << endl << "using name space std;" << endl << "int main()" << endl << "{" << endl << "\ta score = 20;" << "\t int b = 4;"
			<< endl << "\tcout<<''Addition: ''<<a+b;" << endl << "return 0;" << endl << "}";
		Sleep(1000);
		cout << "-- - OUTPUT-- - " << endl << "Addition: 24" << endl << endl << endl << "same is tha cesa with other operators." << endl;
		cout << "Do you want to take test (y/n): ";
	}
	void test_basic()
	{

		int  score = 0;
		char a;
		system("cls");
		cout << "\t\t-------START TEST------" << endl << endl
			<< "\t\t1. For what % symbol use for?" << endl
			<< "\t\ta) Multiplication" << endl
			<< "\t\tb) subtraction" << endl
			<< "\t\tc) Addition" << endl
			<< "\t\td) Modulus" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;
		if (a == 'd')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		system("cls");
		cout << endl << endl << "\t\t2. which perform multiplication?" << endl
			<< "\t\ta) a * b" << endl
			<< "\t\tb) a & b" << endl
			<< "\t\tc) a ^ b" << endl
			<< "\t\td) a x b" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;
		if (a == 'a')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		system("cls");
		cout << endl << endl << "\t\t3. which symbol is use for division?" << endl
			<< "\t\ta) |" << endl
			<< "\t\tb) /" << endl
			<< "\t\tc) %" << endl
			<< "\t\td) !" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;
		if (a == 'b')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		if (score >= 2)
		{
			system("cls");
			cout << setw(25) << "\t\t***" << endl
				<< setw(25) << "\t\t*      CONGRATULATIONS        *" << endl
				<< setw(25) << "\t\t*   You pass the First level with a score of :" << score << "      *" << endl
				<< setw(25) << "\t\t***" << endl << endl;
		}
		else {
			system("cls");
			cout << "We regret to inform you that:";
			cout << "You have failed :( ";
		}
	}
	void medium()
	{
		system("cls");
		cout << setw(25) << "***" << endl
			<< setw(25) << "*         BASIC LEVEL         *" << endl
			<< setw(25) << "*    Conditional Statements   *" << endl
			<< setw(25) << "***" << endl << endl;
		Sleep(1000);
		cout << "Conditions in programming are things that decide. " << endl
			<< "These essential pieces of code check whether something is true or false before moving on to the next step.";
		Sleep(1000);
		cout << endl << "Generally, conditionals use if/then statements. ";
		Sleep(1000);
		int gdriver = DETECT, gmode;
		initgraph(&gdriver, &gmode, (char*)"");
		for (int i = 0; i < 100; i++)
		{

			readimagefile("condition.jpg", 100, 100, 600, 600);

			delay(5);
		}
		closegraph();
		system("cls");
		cout << endl << "For example," << endl << " IF the password is correct, THEN give the user access to the account." << endl << "IF the user clicks the delete button, THEN send the email to the trash."
			<< endl << "For learning conditions first of all we need to know about some logical operators " << endl
			<< "here are some logical operators" << endl;
		Sleep(1000);
		cout << "\t== equal to " << endl << "\t> greater then" << endl << "\t< less then" << "\t>= greater then equal to" << endl << "<= less then equal to" << endl
			<< endl << "so thes abve are some logic operator that we use in condition mostly" << endl
			<< "How do conditions operate in code ? " << endl << " Well, they typically check if something is true or equal to something else " << endl << "and use an IF part and a THEN part(and, in some cases, an ELSE part) to determine the next step, action, or inaction."
			<< " ----Code Example----" << endl << endl << "#include <iostream>" << endl << "using name space std;" << endl << "int main()" << endl << "{" << endl << "\tint Ali_score = 20;" << endl
			<< "\tint Ahmed_score = 80;" << endl << "if(Ali_score > Ahmed_score)"
			<< endl << "{" << endl << "\tcout<<<< Ali score more then Ahmed ;" << endl << "}" << endl << "else" << endl << "\tcout << <<  Ahmed score more then Ali ; " << endl << "return 0; " << endl;
		Sleep(2000);
		cout << endl << "----Output----" << endl
			<< endl << "Ahmed score more then Ali";
		Sleep(200);
		cout << "Do you want to take test (y/n): ";
	}
	void test_medium()
	{
		system("cls");
		int  score = 0;
		char a;
		cout << "\t\t-------START TEST------" << endl << endl
			<< "\t\t1. Which symbol is use for grater thhe equal to?" << endl
			<< "\t\ta) >" << endl
			<< "\t\tb) <" << endl
			<< "\t\tc) >=" << endl
			<< "\t\t) <=" << endl
			<< "\t\t----Enter your choice : ";
		cin >> a;
		if (a == 'c')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		system("cls");
		cout << endl << endl << "\t\t2. Conditions are statement in programe which __ .?" << endl
			<< "\t\ta) Perform calculation" << endl
			<< "\t\tb) Print output" << endl
			<< "\t\tc) Decide" << endl
			<< "\t\td) Input value" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;
		if (a == 'c')
		{
			score++;
		}
		system("cls");
		cout << endl << endl << " \t\t----What is output of this code----" << endl << endl << "\t\t#include <iostream>" << endl << "\t\tusing name space std;" << endl << "\t\tint main()" << endl << "{" << endl << "\t\t\tint A = 7;" << endl
			<< "\t\t\tint B = 5;" << endl << "\t\tif(A > B)"
			<< endl << "\t\t{" << endl << "\t\t\tcout<<<< A is greater then B <<A ;" << endl << "\t\t}" << endl << "\t\telse" << endl << "\t\t\tcout << <<  \t\tB is greater then A  <<B; " << endl << "\t\treturn 0; " << endl
			<< "\t\ta) A is greater then B 7" << endl
			<< "\t\tb) B is greater then A 5" << endl
			<< "\t\tc) 7 A is greater then b" << endl
			<< "\t\td) 5 B is greater then A" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;
		if (a == 'a')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		if (score >= 2)
		{
			system("cls");
			cout << setw(25) << "\t\t*****" << endl
				<< setw(25) << "\t\t*      CONGRATULATIONS        *" << endl
				<< setw(25) << "\t\t*   You passed the Basic level with a score of :" << score << "      *" << endl
				<< setw(25) << "\t\t*****" << endl << endl;
		}
		else {
			system("cls");
			cout << "We regret to inform you that:";
			cout << "You have failed :( ";
		}
	}
	void advance()
	{
		system("cls");
		cout << setw(25) << "\t\t*****" << endl
			<< setw(25) << "\t\t*       Advance LEVEL         *" << endl
			<< setw(25) << "\t\t*     Type of Variables       *" << endl
			<< setw(25) << "\t\t*****" << endl << endl;
		Sleep(1000);
		cout << "Sometimes we take for granted the ability to instruct someone to repeat an action, " << endl
			<< "rather than needing to tell them to perform each individual action." << endl
			<< "Imagine having to tell someone,  Set this plate on the table, then set this plate on the table, then set this plate on the table   " << endl
			<< "instead of simply saying,  Set the table for four. " << endl;
		Sleep(1000);
		cout << "Fortunately, there is a way to tell a computer to repeat an action without writing separate code for each repetition. " << endl
			<< "In programming, this concept is called loops. " << endl
			<< "Loops allow you to use just one command to repeat the same process multiple times."
			<< endl << endl << "---Types of loop---"
			<< endl << "There are two types of loop in programming: " << endl
			<< "\tCounting Loop" << endl
			<< "\tA counting loop tells the computer to repeat an action a certain number of times." << endl
			<< " Let s consider the example of sipping on a glass of milk." << endl
			<< "Let s say you have to drink a glass of milk. Instead of drinking it in one go, you need to sip on it ten times." << endl
			<< "Here, you will repeat the action of drinking a glass of milk by sipping on it ten times.";
		Sleep(2000);
		cout << endl << endl << "\tConditional loop" << endl
			<< "A conditional loop tells a computer to repeat a sequence of actions until a condition is satisfied." << endl
			<< " Let s consider the example of reading a book under the table lamp."
			<< "Imagine you re reading a book under the table lamp.You need to keep reading the book until the table lamp is off." << endl
			<< "In this case, you are repeating the action until a condition is met." << endl
			<< "Similarly, conditional loops tell the computer to perform an action in computer programming until a condition is met."
			<< endl << endl << "Here, the  condition  is  until the table lamp is off .Until it happens, you will perform the  action  of  reading a book .";
		Sleep(1500);
		cout << "Do you want to take test (y/n): ";
	}
	void test_advance()
	{
		int  score = 0;
		char a;
		system("cls");
		cout << "\t\t-------START TEST------" << endl << endl;
		//cycle
		int gdriver = DETECT, gmode;
		initgraph(&gdriver, &gmode, (char*)"");
		for (int i = 0; i < 200; i++)
		{

			line(50 + i, 405, 100 + i, 405);
			line(75 + i, 375, 125 + i, 375);
			line(50 + i, 405, 75 + i, 375);
			line(100 + i, 405, 125 + i, 375);
			line(150 + i, 405, 100 + i, 375);
			line(75 + i, 405, 100 + i, 345);
			line(70 + i, 370, 80 + i, 370);
			line(80 + i, 345, 100 + i, 345);
			//wheel
			circle(150 + i, 405, 30);
			circle(50 + i, 405, 30);
			//road
			line(0, 436, getmaxx(), 436);
			//stone
			rectangle(getmaxx() - i, 436, 650, 431);
			delay(10);
			cleardevice();
		}
		closegraph();
			cout<< "\t\t1. This Animation was Example of??" << endl
			<< "\t\ta) Loop" << endl
			<< "\t\tb) Variable" << endl
			<< "\t\tc)  Arithmetic Operation" << endl
			<< "\t\td) Not Sure" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;

		if (a == 'a')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		system("cls");
		cout << endl << endl << "\t\t2.  Each pass through a loop is called a/an.?" << endl
			<< "\t\ta) enumeration" << endl
			<< "\t\tb) iteration" << endl
			<< "\t\tc) culmination" << endl
			<< "\t\td) pass through" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;

		if (a == 'c')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		system("cls");
		cout << endl << endl << " \t\t  Which looping process checks the test condition at the end of the loop?" << endl
			<< "\t\ta)  for" << endl
			<< "\t\tb)  while " << endl
			<< "\t\tc) Do-While" << endl
			<< "\t\td) no looping process checks the test condition at the end" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;

		if (a == 'b')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		if (score == 3)
		{
			system("cls");
			cout << setw(25) << "\t\t***" << endl
				<< setw(25) << "\t\t*      CONGRATULATIONS        *" << endl
				<< setw(25) << "\t\t*   You pass the Second level with a score of: " << score << "    *" << endl
				<< setw(25) << "\t\t***" << endl << endl;
		}
		else {
			system("cls");
			cout << "We regret to inform you that:";
			cout << "You have failed :( ";
		}

	}
};
class age8_10
{
	int  score = 0;
public:
	int marks=0;
	void basic()
	{
		system("cls");
		cout << setw(25) << "***" << endl
			<< setw(25) << "*       BASIC LEVEL           *" << endl
			<< setw(25) << "*  Write Your First Programe  *" << endl
			<< setw(25) << "***" << endl << endl;
		Sleep(1000);
		cout << "Today, we're going to take you on a programming journey! " << endl;
		Sleep(1000);
		cout << "You'll learn the basic concepts of C++ ," << endl
			<< " as well as know how to write your first C++ program." << endl << endl;
		Sleep(1000);
		cout << "Ready to become a C++ programmer? Let's jump in!" << endl << endl;
		cout << "C++ was developed by Bjarne Stroustrup in 1979." << endl << endl;
		Sleep(1000);
		cout << setw(25) << "THREE BASIC STEPS AND TERMS " << endl << endl;
		Sleep(500);
		cout << "C++ is a powerful & complex computer language," << endl
			<< " but don't be nervous! " << endl << "Learning C++ isn't as scary as it might look. " << endl
			<< "It can be broken down into 3 simple steps:";
		Sleep(1000);
		cout << "  -> Understand the basic concepts and terms." << endl
			<< "  -> Write your program in a text editor." << endl
			<< "  -> Compile your program in a compiler or online IDE." << endl;
		Sleep(1000);
		cout << "For today's example, we'll make a 'Hello Kids :)' program. " << endl
			<< "This is one of the simplest ways to learn C++. " << endl
			<< "This will eventually make your screen display 'Hello Kids :)'" << endl << endl;
		Sleep(1000);
		cout << "#include<iostream>" << endl
			<< "using namespace std;" << endl
			<< "int main ()" << endl
			<< "{" << endl << "   cout<<''hellow kids : )'';" << endl << endl << endl << "return 0;" << endl << "}" << endl;
		Sleep(1000);
		cout << endl << "----OUTPUT----" << endl;
		cout << setw(25) << "***" << endl
			<< setw(25) << " *       Hellow kids :)        *" << endl
			<< setw(25) << " ***" << endl << endl;
		Sleep(2000);
		cout << "  CODE EXPLAINATION" << endl << endl
			<< "-> #include<iostream>: Lines that start with '#' is called a directive. "
			<< endl << "'#include' tells the compiler to include a certain file (to preprocess the information). " << endl
			<< "In this case, this tells it to include the standard iostream file." << endl << endl;
		Sleep(2000);
		cout << "-> namespace std: A namespace is used in C++ to organize code into logical groups. "
			<< endl << "In the program, you can't have functions, variables,and so on with the same name. " << endl
			<< "This helps avoid any conflicts. In this case, 'std' is an abbreviation for standard." << endl << endl;
		Sleep(2000);
		cout << "-> int main (): This line is used to declare a function, which is made up of a set of statements needed to perform a certain task." << endl
			<< " The 'main ()' is necessary for any C++ program to run properly (regardless of location in the program)." << endl;
		Sleep(2000);
		cout << "-> { and }: The '{' symbol stands for the start of the main function, while the '}' symbol indicates the end of the main statement." << endl
			<< "All the code in between these brackets represents the main function." << endl << endl;
		Sleep(2000);
		cout << "-> std::cout<< hello kids :) ;: This line, also known as a statement, tells the compiler to display a message. " << endl
			<< "In this case, our first message is ''hello kids :)'' The code after '<<' is what is displayed later on the screen." << endl << endl;
		Sleep(2000);
		cout << "-> return 0;: This is another statement." << endl
			<< " It's used to return the value from the function (as well as signify that the function is finished)." << endl << endl;
		Sleep(2000);
		cout << "---And there you go!!!---" << endl << "You just learned how to write your very first program." << endl;
		Sleep(2000);
		cout << "Do you want to take test (y/n): ";
	}
	void test_basic()
	{

		char a;
		system("cls");
		cout << "\t\t-------START TEST------" << endl << endl
			<< "\t\t1. C++ was invented in _ ." << endl
			<< "\t\ta) 1975" << endl
			<< "\t\tb) 1977" << endl
			<< "\t\tc) 1978" << endl
			<< "\t\td) 1979" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;

		if (a == 'd')
		{
			score++;
			cout << "CORRECT ANSWER";

		}
		system("cls");
		cout << endl << endl << "\t\t2. Wwe called a line directive if it starts with _ ." << endl
			<< "\t\ta) #" << endl
			<< "\t\tb) $" << endl
			<< "\t\tc) {" << endl
			<< "\t\td) @" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;

		if (a == 'a')
		{
			score++;
			cout << "CORRECT ANSWER";

		}
		system("cls");
		cout << endl << endl << "\t\t3. which line is use to declear main function?" << endl
			<< "\t\ta)main()" << endl
			<< "\t\tb)int main" << endl
			<< "\t\tc)int main()" << endl
			<< "\t\td) main()" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;

		if (a == 'c')
		{
			score++;
			cout << "CORRECT ANSWER";

		}
		marks = marks + score;
		if (score >= 2)
		{
			system("cls");
			cout << setw(25) << "\t\t***" << endl
				<< setw(25) << "\t\t*      CONGRATULATIONS        *" << endl
				<< setw(25) << "\t\t*   You passed the first level with a score of: " << score << " " << endl
				<< setw(25) << "\t\t***" << endl << endl;
		}
		else {
			system("cls");
			cout << "We regret to inform you that:";
			cout << "You have failed :( ";
		}


	}
	void medium()
	{
		system("cls");
		cout << setw(25) << "***" << endl
			<< setw(25) << "*       Medium LEVEL          *" << endl
			<< setw(25) << "*        Veriables            *" << endl
			<< setw(25) << "***" << endl << endl;
		Sleep(500);
		int gdriver = DETECT, gmode;
		initgraph(&gdriver, &gmode, (char*)"");
		for (int i = 0; i < 100; i++)
		{

			readimagefile("variable.jpg", 100, 100, 500, 400);


			delay(5);
		}
		closegraph();
		system("cls");
		cout << "-> VERIABLE:" << endl << "a variable is a container that holds information that you can access. "
			<< endl << "You can think of a variable as a box that contains something." << endl
			<< " You can open the box to find out what is inside, or even put something else into the box.";
		Sleep(500);
		cout << endl << endl << "-> VERIABLE IN CODING" << endl
			<< "In computer programming, a variable has a name and contains a value. " << endl;
		Sleep(500);
		cout << "For example:" << endl << "           Think of our previous analogy of a variable as being a box. "
			<< endl << "If you labeled the box as Toys and put a teddy bear inside it, " << endl
			<< "in programming terms, Toys is the variable name, and teddy bear is the value.";
		Sleep(500);
		cout << endl << "something that can be describe ase veriable if it:" << endl
			<< "\t1. Varies" << endl
			<< "People s names are an example of something that varies," << endl
			<< "for example my name is likely to be different to your name." << endl
			<< "\t2. Changes " << endl
			<< "The weather is an example of something that changes, "
			<< endl << "for example today it is sunny and yesterday it rained." << endl
			<< "\t3. can be changed" << endl
			<< "The scoreboard in a football match can be changed to reflect the current score.";
		Sleep(500);
		cout << endl << "SOME CONDITIONS FOR WRITING VARIABLE"
			<< endl << "\t. A variable name must consist of letters, digits and underscore character" << endl
			<< "\t. The first character must be a letter or underscore." << endl
			<< "\t. Blank spaces cannot be used in variable names." << endl
			<< "\t. Special characters like #, $ are not allowed." << endl;
		Sleep(500);
		cout << "Do you want to take test (y/n): ";
	}
	void test_medium()
	{
		  score = 0;
		char a;
		system("cls");
		cout << "\t\t------START TEST------" << endl << endl
			<< "\t\t1. Avariable has a name that contain __." << endl
			<< "\t\ta) value" << endl
			<< "\t\tb) datatype" << endl
			<< "\t\tc) character" << endl
			<< "\t\td) expresion" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;

		if (a == 'a')
		{
			score++;
			cout << "CORRECT ANSWER";

		}
		system("cls");
		cout << endl << endl << "\t\t2. Which one of these is a variable?" << endl
			<< "\t\ta) #myname" << endl
			<< "\t\tc) my name" << endl
			<< "\t\td) !my_name" << endl
			<< "---Enter your choice: ";
		cin >> a;

		if (a == 'a')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		marks = marks + score;
		if (score == 2)
		{
			system("cls");
			cout << setw(25) << "\t\t***" << endl
				<< setw(25) << "\t\t*      CONGRATULATIONS        *" << endl
				<< setw(25) << "\t\t*  You pass the medium level with a score of:  " << score << "   *" << endl
				<< setw(25) << "\t\t***" << endl << endl;
		}
		else {
			system("cls");
			cout << "We regret to inform you that:";
			cout << "You have failed :( ";
		}
	}
	void advance()
	{
		system("cls");
		cout << setw(25) << "***" << endl
			<< setw(25) << "*       Advance LEVEL         *" << endl
			<< setw(25) << "*     Type of Variables       *" << endl
			<< setw(25) << "***" << endl << endl;
		Sleep(500);
		cout << "Today we will learn three types of variables which are mostly khown as datatype" << endl
			<< "But first of all we need to know to how declear veriable in code." << endl;
		Sleep(500);
		cout << "Here is the syntax for declaration of veriable in code";
		Sleep(500);
		int gdriver = DETECT, gmode;
		initgraph(&gdriver, &gmode, (char*)"");
		for (int i = 0; i < 100; i++)
		{

			readimagefile("data.jpg", 100, 100, 500, 400);

			delay(5);
		}
		closegraph();
		system("cls");
		cout << endl << "\tdatatype variable_name = value;";
		Sleep(500);
		cout << endl << "-> INTEGER TYPE" << endl
			<< "A number is one of the simplest data types. Programming languages have different kinds of numbers." << endl
			<< " Integer variables can hold numbers like 5 or -3." << endl
			<< "For example:" << endl << "\t This is writen as" << endl << "\tint score = 20;" << endl
			<< "score is a variable of intiger type with a value of 20 ." << endl << endl;
		Sleep(2000);
		cout << "-> FLOAT TYPE" << endl
			<< "For holding fractional values, special types is used to hold these values which name as float." << endl
			<< "For Example:" << endl << "\tfloat height = 4.19;" << endl << "In the above example variable name height have typr float and the value is 4.19" << endl << endl;
		Sleep(2000);
		cout << "-> CHARACTER TYPE" << endl
			<< "This type of variable hold all the alphabets and characters" << endl
			<< "For Example:" << endl << "\tIt is represent as" << endl << "\tchar alphabet = 'a';" << endl
			<< "In the above example to char is the datatype of variable alphabet and a is assign to it." << endl << endl;
		Sleep(2000);
		cout << "Now we learn about how to print variable in code " << endl << "To display veriable value on scree we use cout operatoer "
			<< "'<<' and after it we write the veriable name " << endl << "Here in the example on code which prin the wariable vaue on screen" << endl;
		Sleep(2000);
		cout << endl << "#include <iostream>" << endl << "using name space std;" << endl << "int main()" << endl << "{" << endl << "\tint score = 20;"
			<< endl << "\tcout<<<< My score is:  <<score;" << endl << "return 0;" << endl << "}";
		Sleep(500);
		cout << "------OUTPUT------" << endl << "My score is: 20";
		cout << "Do you want to take test (y/n): ";
	}
	void test_advance()
	{
	  score = 0;
		char a;
		system("cls");
		cout << "\t\t-------START TEST------" << endl << endl
			<< "\t\t1. Which type of variable hold all fractions?" << endl
			<< "\t\ta) int" << endl
			<< "\t\tb) float" << endl
			<< "\t\tc) char" << endl
			<< "\t\td) non of these" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;

		if (a == 'b')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		system("cls");
		cout << endl << endl << "\t\t2. which is the correct form to declearing variable" << endl
			<< "\t\ta) num = 90;" << endl
			<< "\t\tb) 90 =num int;" << endl
			<< "\t\tc) int num = 90;" << endl
			<< "\t\td) num int = 90;" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;

		if (a == 'c')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		system("cls");
		cout << endl << endl << "\t\t3. In which type of datatype we enter all alphabets and characters?" << endl
			<< "\t\t)int" << endl
			<< "\t\tb)float" << endl
			<< "\t\t c)char" << endl
			<< "\t\td) non of these" << endl
			<< "\t\t---Enter your choice: ";
		cin >> a;

		if (a == 'c')
		{
			score++;
			cout << "CORRECT ANSWER";
		}
		marks = marks + score;
		if (score >= 2)
		{
			system("cls");
			cout << setw(25) << "\t\t***" << endl
				<< setw(25) << "\t\t*      CONGRATULATIONS        *" << endl
				<< setw(25) << "\t\t*   You pass the third level with a score of: " << score << "     *" << endl
				<< setw(25) << "\t\t***" << endl << endl;
		}
		else {
			system("cls");
			cout << "We regret to inform you that:";
			cout << "You have failed :( ";
		}
	}
};
class Student :public CodeLearner
{
	age8_10 a;
	age11_15 b;
protected:
	int choice, exist, age;
	string signuser, signpass;
	string user, pass, u, p;
public:


	void Menu()
	{
		cout << "*************************\n\n\n";
				cout << "                      Welcome to login page                               \n\n";
				cout << "*******        MENU        ***********\n\n";
				cout << "\n\t\t1.LOGIN" << endl;
				cout << "\t\t2.REGISTER" << endl;
				cout << "\t\t3.FORGOT PASSWORD (or) USERNAME" << endl;
				cout << "\t\t4.Exit" << endl;
				cout << "\n\tEnter your choice :";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
			login();
			break;
		case 2:
			signup();
			break;
		case 3:
			forgot();
			break;
		case 4:
			cout << "Thanks for using login page:" << endl;
			break;
		default:
			cout << "Invalid Choice selected:" << endl;
			Menu();
		}
	}
	void signup()
	{
		system("cls");
		cout << "Enter UserName:" << endl;
		cin >> signuser;
		cout << "Enter The Password:" << endl;
		cin >> signpass;
		cout << "Enter Age: " << endl;
		cin >> age;

		ofstream reg("database.txt", ios::app);
		reg <<"\n"<< signuser;
		reg << "\n" << signpass;
		reg<< "\n" << age ;
		system("cls");
		cout << "Sign up sucessfull";
		Menu();
	}
	void login()
	{
		system("cls");
		cout << "Enter the username:";
		cin >> user;
		cout << "Enter The Password:";
		cin >> pass;
		ifstream input;
		input.open("database.txt");
		while (!input.eof())
		{
			input >> signuser;
			input >> signpass;
			input >> age;


			if (signuser == user && signpass == pass)
			{
				system("cls");
				cout << "Hello " << user << " " << "Welcome to Code Learner App:" << endl;
				cout << "------------------------------------------------------------------------------" << endl;
				cout << "According to your mentioned age we have made the right learning program for you";
				Sleep(5000);

				if (age >= 7 && age <= 10)
				{

					a.basic();
					char choice;
					cin >> choice;
					if (choice == 'y'){
						a.test_basic();

					}
					cout << "---Do you want to go to next level?(y/n): ";
					cin >> choice;
					if (choice == 'y')
					{
						a.medium();

						cin >> choice;
						if (choice == 'y'){
							a.test_medium();
						}
						cout << "---Do you want to go to next level?(y/n): ";
						cin >> choice;
						if (choice == 'y')
						{
							a.advance();

							cin >> choice;
							if (choice == 'y'){
								a.test_advance();
							}
						}
					}
				}
				if (age >= 11 && age <= 15)
				{
					b.basic();
					char choice;
					cin >> choice;
					if (choice == 'y')
					{
						b.test_basic();
					}
					cout << "---Do you want to go to next level?(y/n): ";
					cin >> choice;
					if (choice == 'y')
					{
						b.medium();

						cin >> choice;
						if (choice == 'y')
						{
							b.test_medium();
						}
						cout << "---Do you want to go to next level?(y/n): ";
						cin >> choice;
						if (choice == 'y')
						{
							b.advance();

							cin >> choice;
							if (choice == 'y')
							{
								b.test_advance();
							}
						}
					}

				}
			}

					/*cin.get();
					cin.get();*/

			/*}

			else
			{
				cout << "Sorry Login Error:" << endl;
				cin.get();
				Menu();
			}*/

		}
		input.close();
	}


	void forgot()
	{
		int ch;
		system("cls");
		cout << "1. Search your Account by username:" << endl;
		cout << "2. Main Menu:" << endl;
		cout << "Enter Your Choice:" << endl;
		cin >> ch;
		if (ch==1)
		{
				  int ex = 0;
				  string searchuser;
				  cout << "Enter Your Remembered Username:" << endl;
				  cin >> searchuser;
				  ifstream searchu;
					 searchu.open("database.txt");
					 while (!searchu.eof())
					 {
						 searchu >> signuser;
						 searchu >> signpass;
						 searchu >> age;
						 if (signuser == searchuser)
						 {
							 cout << "---YOUR PASSWORD IS: " << signpass;
							 Menu();
						 }
						 else {
							 cout << "Sorry Account Not Found" << endl;
							 cin.get();
							 cin.get();
							 Menu();
						 }
						 searchu.close();
					 }

				  if (ch==2){
				  Menu();
		}
		}
	}
};
class Parent :public CodeLearner {
protected:
	long int phno;
	int exist;
	string name;
	string relation;
	string user, u;
public:
	void parentDetails()
	{
		cout << "Enter Your Name:" << endl;
		cin >> name;
		cout << "Enter Your Phone Number:" << endl;
		cin >> phno;
		cout << "Enter Your Relation:" << endl;
		cin >> relation;
		cout << "Enter your Child Username:" << endl;
		cin >> user;
		system("cls");
		ifstream input("parent_database.txt");
		while (input >> u)
		{
			if (u == user)
			{
				exist = 1;
			}
		}
		input.close();
		if (exist == 1)
		{
			cout << "Child Name:" << user << endl;
			cout << endl;
			cout << "Father/Mother Name:" << name << endl;
			cout << endl;
			cout << "Relation:" << "  " << relation << endl;
			cout << endl;
			cout << "Phone Number:" << " " << phno << endl;
			cin.get();
			cin.get();
		}
		else
		{
			cout << "Sorry no Record Found:" << endl;
			cin.get();

		}

	}


};
class Admin :public CodeLearner
{
protected:
	int choice;

public:
	void admin()
	{
		cout << "1. All Signed-up Users" << endl;
		cout << "2.Courses" << endl;
		cout << endl;
		cout << "Enter your Choice:" << endl;
		cin >> choice;
		system("cls");
		if (choice == 1)
		{
			fstream database;
			database.open("database.txt", ios::in);
			if (!database){
				cout << "Database dosent exist:" << endl;
			}
			else{
				char x;
				while (1)
				{
					database >> x;
					if (database.eof())
						break;
					cout << x<<endl;
				}
			}
			database.close();
		}
		if (choice == 2)
		{
			cout << "Course Edit:" << endl;
		}
		if (choice>2){
			cout << "Invalid Option" << endl;
			system("cls");
			admin();
		}
	}

};
class animation {
protected:
public:

	void menubar(int box_color, int text_color)
	{

		for (int i = 0; i < 20; i++)
			rectangle(110 - i, 150 - i, 580 + i, 430 + i);
		setcolor(text_color);
		settextstyle(8, 0, 5);
		outtextxy(240, 200, "Welcome To");
		outtextxy(240, 250, "Code Learner");
		outtextxy(240, 300, "APP");

	}

};

int main()
{
	int choice;
	int box_color = 11;
	int text_color = 14;
	CodeLearner cl;
	Admin a;
	Student s1;
	Parent p1;
	animation a1;
	cout << endl;
	cout << endl;
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, (char*)"");

	int flag = 0;
	for (int i = 0; i < 100; i++)
	{

		{

			if (flag == 0)
			{
				if (!GetAsyncKeyState(VK_F1))
				{
					cleardevice();
					a1.menubar(box_color, text_color);

					cleardevice();
					a1.menubar(box_color, text_color);

				}
				flag++;
			}
			if (GetAsyncKeyState(VK_F1))
			{
				cleardevice();
				a1.menubar(box_color, text_color);

			}

			delay(40);
		}
	}
	closegraph();
	system("cls");
	cl.Welcome();
	cout << endl;
	cout << "Enter your chioce: " ;
	cin >> choice;
	system("cls");
	if (choice == 1)
	{

		a.admin();
	}
	if (choice == 2)
	{
		s1.Menu();
	}
	if (choice == 3)
	{
		p1.parentDetails();
	}

	system("pause");
}
