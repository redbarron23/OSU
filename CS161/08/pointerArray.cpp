/*
 * Author: james Hourihane
 * class: CS 161
 * program name:
 * Desc:
 */

/*
 *5. (4) Lastly create an array of pointer to the struct (person * friend_ptrs[5]), fill in the array (possibly with the 
friends from the array of direct struct variables), and try to access their member values...
File must be called: pointerArray.cpp
Note:
because this is an array we will be able to use either square brackets ( [] ) or pointer arithmetic (I avoid 
teaching this to you in this class...),
(example: friends_ptrs[0] gives us a pointer to a person...)
we then get a pointer to a person, which we can get the member values with the arrow notation (->) or by
dereferencing with the star ( * ) and then using a dot ( . )
(example: friends_ptrs[0]->name or (*friends_ptrs[0]).name )
having different options to access variables may seem pointless right now, but you could store 
*friends_ptrs[0] in a variable (say cur_friend) and use it to access each of the members (cur_friend.name
and cur_friend.age), which might save a bit of time with a large structure; imagine having even 10 members 
to access, which would you prefer to type (consolidated location for error) and look at (cur_friend is more 
obvious to me than some complex approach to dereferencing)?
For some (optional) extra practice, do the above instead using dynamic memory (new and delete keywords)
Note: you may find this post helpful, though they use dynamic memory in the example: 
http://www.cplusplus.com/forum/beginner/35631/Note: you may find this code useful, but should wait until you have tried the above first: 
10_struct_pointer_array_demo.cpp
*/

#include <iostream>
using namespace std;

int main()
{

}
