# S1 - Programming Skills Portfolio

Your task is to develop solutions to a series of coding exercises that will test your knowledge of the fundamental programming techniques introduced through the course of the module. These exercises complement the content delivered in class each week and allow you to put into practice what you have learned. 

When completing the exercises you should create a new project for each one and save them to this folder. Each exercise should be appropriately named (e.g. 01-CodingIsCool) so they are easy to find. You should commit changes in your repository often (as a minimum after completing each exercise), use descriptive messages for these commits and ensure you are regularly pushing your code back to GitHub. Throughout the module there are staged deadlines when specific exercises must be completed by:

## Deadlines

| Deadline Number    | Required Exercises | Deadline Date |
| ------------------ | ------------------ | ------------- |
| 1 | 1. Coding is Cool<br/>2. Simple Sums<br/>3. Biography<br/>4. Primitive Quiz<br/>5. Days of the Month | October 30 - 11:59am | 
| 2 | 6. Brute Force Attack<br/>7. Some Counting<br/>8. Simple Search<br/>9. Hello<br/>10. Is it even? | December 4 - 11:59am | 

## Marking

The assessment has a total of **335 marks** available across the following criteria:

### Technical Implementation 

**235 marks (~70%)**

Each exercise has a set number of marks available. You will be marked on the following:

- Solution successfully compiles
- Adherence to the task requirements
- Correct usage of programming techniques
- Efficiency of the code
- Implementation of advanced requirements (where relevant)
- Correct use of coding conventions (e.g. formatting, indentation, commenting)

In addition to the marks are also available for:

### Repository Presentation

**35 marks (~10%)**

Have you saved your exercises to the correct location and made appropriate use of commits (e.g. per task with descriptive messages)

### Extended Learning 
**65 marks (~20%)**

Independent study is a crucial element of university study and helps solidify and extend learning. Additional marks are available for the completion of the following online course:
  
  * [Introduction to C++](https://www.sololearn.com/en/learn/courses/c-plus-plus-introduction)

Please refer to Minerva for the full brief including marking criteria...

---

## Exercises

### 1. Coding is Cool

>There are **10 marks** available for this exercise.

Fill in the blanks in the code below so the program outputs "Coding is Cool" to the console.

```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
     _____ << _____ << endl;
}
```


&nbsp;
&nbsp;
---
&nbsp;
&nbsp;

### 2. Simple Sums

>There are **15 marks** available for this exercise.

Set up a new project and follow the below steps:

* Declare a variable with data type integer. Initialise with a value of 8.
* Declare a variable with data type integer. Initialise with a value of 10.
* Declare a third variable of data type integer that adds the previous variables together.
* Print the value of the sum to the console.

&nbsp;
&nbsp;
---
&nbsp;
&nbsp;

### 3. Biography

>There are **25 marks** available for this exercise.

Create a program that prints your name, hometown and age to the console. The program has the following constraints:

* Each item should be stored using a variable of an appropriate data type.
* Each item should be printed on a new line.
* You can only use ```cout``` once.

#### Advanced requirements

* Have the user input the values for name, hometown and age
* Try giving the program both your first and second name when asked. What do you notice? Can you provide a fix?
* Try entering a string or letter value when asked to enter your age. What happens? Can you provide a fix?

*If completing the optional requirements you may use ```cout``` more than once to request user input. However the output of information must be performed with a single ```cout```*

&nbsp;
&nbsp;
---
&nbsp;
&nbsp;

### 4. Primitive Quiz

>There are **30 marks** available for this exercise.

You have been asked to write a simple question and answer programme. There is only one question to answer: “What is the capital of France”.

* The programme should ask the user this question, then prompt for a response.
* The user then types in an answer.
* If the answer is correct, the programme should tell the user that their answer was correct.
* If the answer is incorrect, the programme should tell the user that their answer was wrong.

#### Advanced Requirements

* What about capital letters? (e.g. paris vs Paris vs PaRis)
* Add additional questions.  (e.g. 10 Capitals Cities of Europe Quiz)

&nbsp;
&nbsp;
---
&nbsp;
&nbsp;

### 5. Days of the Month

>There are **30 marks** available for this exercise.

You are a freelance calendar maker. Unfortunately, like me, you are useless are remembering how many days there are in each month of the year.

Write a program that uses a switch statement to tell a user how many days there are in a month.

Your cases should test a number corresponding to the months (e.g. 1 = January, 12 = December), and cases should print out how many days there are in a month.

&nbsp;
&nbsp;
---
&nbsp;
&nbsp;

### 6. Brute Force Attack

>There are **30 marks** available for this exercise.

You are an inexperienced hacker trying to find the correct password to enter a safe...

Write a programme that defines the correct password as 12345, and allows users to enter password attempts until they reach the correct answer.

Your programme should use a **while loop** to allow the user to keep entering password attempts until correct. Once the correct password is entered the program should output an appropriate message e.g *"Welcome to the Secure Area"*


#### Optional Requirements

Modify the solution to Brute-Force Attack to include a maximum of 5 password attempts. Each time the user enters an incorrect password, they should be told how many password attempts remain. If there are 5 failed password attempts the **while loop** should end and the program should inform the user that the authorities have been alerted!

&nbsp;
&nbsp;

### 7. Some Counting

>There are **20 marks** available for this exercise.

Use your newly acquired knowledge of the for loop to complete the following tasks. Print all values to console in each case.

* Write a loop that counts up from 0 to 50 in increments of 1.
* Write a loop that counts down from 50 to 0 in decrements of 1.
* Write a loop that counts up from 30 to 50 in increments of 1.
* Write a loop that counts down from 50 to 10 in decrements of 2.
* Write a loop that counts up from 100 to 200 in increments of 5.

*You may include all loops in a single project*

&nbsp;
&nbsp;

### 8. Simple Search

>There are **30 marks** available for this exercise.

Write a simple search engine that tests if a string is present in a string array. The array you need to declare should be initialised with the following values "Jake" "Zac", "Ian", "Ron", "Sam", "Dave". The string you are searching for is "Sam"

Your program should loop the array and test each array index against the search term. If the search term is found the program should output an appropriate message


#### Optional Requirements

Allow the user to enter the name to be searched

&nbsp;
&nbsp;

### 9. Hello

>There are **10 marks** available for this exercise.

Fill in the blanks to complete the code so the function runs and outputs "Hello" to the console

```C++
#include <iostream>
using namespace std;

____ hello(){
  ____ << "Hello" << ___;
}

int main(){

  _______

  return 0;
}
```
&nbsp;
&nbsp;
---
&nbsp;
&nbsp;

### 10. Is it even?

>There are **35 marks** available for this exercise.

Write a program that tests if a value is even. The programme should adhere to the following rules

* The program should ask the user for a number from within the ```main``` function
* The entered number should be **passed** to a function which determines if the value is an even number
* If the number is even the function should **return** the following message:
 *The provided number is even*
* If the number is odd the function should **return** the following message: *The provided number is odd*
* The returned message should be output from within the ```main``` function

&nbsp;
&nbsp;