Relevance Question 1:
Once all of the operators were overloaded it made writing main incredibly easier, almost as if the 
main was being written like utilizing basic algebra in main such as adding 2 integers. As I break it
down further into more classes it becomes easier and easier to get the info I need, essentially the 
ability to reuse is incredibly time saving. 
Having a timestamp and sensor class was quite helpful, especially utilizing a vector of sensors. There was
one aspect that made it more difficult which was overload the output << as the formatting for 
the output needed to be similar to formatting of the header that is created in main. I would think there would be
a way to have a racer output stream place a header once, however I felt the code for that would have made it more
cumbersome. Since the header needed to be called once, meanwhile the vector of racers was called based on the 
number of racers/size of the vector. I guess placing a header function in the racer class would have worked, but then
it would require the future programmer to know to call that header function.

Relevance Question 2:
We didn't just overload the < operator, we overloaded the input/output (<< and >>), we also overloaded the - operator 
to use for sorting which we could have used to sort by name or racer number instead of race time. 
I guess overloading a division operator / could allow for some kind of comparison of between 2 racers' time such as 
how did racer A do between mile marker/sensor number 2 and 3 compared to racer B or what is the ratio of racer A's 
time compared to racer B.
My other thought was if a racer had multiple races then overloading the + operator could be helpful