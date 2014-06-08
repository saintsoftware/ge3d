//Chapter 4 - Analyzing deepness of logic decopulation

/*

The main point is readability over logic decopulation, does a file that have more 3 to 5 lines of code is more usable, 
just because it have more logic decopulation?

Looking at example 1, in Segment you only need to to know in which segment was loaded while in a class you need to declare
it, and take care of it dependencies. This is the main coast of OOP, it is suppose to
do things automatically for you but in reality you need to handle the dependencies unless you want to use a framework
which will consume even more resources then straight OOP.

Most likely it will grow so big that you can't remember what's going on, so people often have a strong perspective on
how to program in OOP, they use setter and getter to input a strong logic that is common to all. It make sense but that it
will produce more 3x lines of code. 

The gain in logic decopulation comes in a loss of readability. People often argue that they will put in a file and don't even
bother to look at it lather on. That is not very realistic and code synthesize? Can't some one improve what you have 
written? Argument: Since all are using the same logic it is not necessary...

The advantage of Segment's you don't need to apply a strong logic decopulation because you relay on code synthesize, 
you make the code so simple that it does need to add layers of logic, it's simple by it self that you can understand the 
dependency's. 

The OOP class to be properly decompose is necessary a deep logic decopulation which makes it hardly readable, while the 
Segment's become more and more synthesized to a point that you are working with a very straight forward and clean code.
It may take a bit of planification and debugging but no one implement proper OOP with out also using planification on 
how things are going to be handle.

Let's compare readability over logic decopulation in this next example:
*/

Example 1

img_format = "png"; 
jpg_compreession();

class image = new image();
jpg->set_jpg; //it compresses the JPG

/*
If i did not mention that the jpg setter is compressing the jpg do you remember and if some one else reads this code?


The answer is you may remember on the short terms but in the long terms no because you will doing so much stuff that it 
will be lost in time. Even if you have that good memory others have no clue what's going on when they look at the code...

You can always argue i can decopulate the compression, so you will end up with:

*/

img_format = "jpg";
jpg_compreession();

class jpg = new jpg();
jpg->set_jpg; 
jpg->compreession(); 

/*
	Now we have the same thing written with 3x more code...
	
*/

char img_format = 'jpg';
char img_location ="game_files/"
char img_name = "header";

/*
	Instead of this we could do this:	
*/

char img_file = "games/location/header.jpg";

/*
	Firt example allow for decopulation, while secound dosen't. So that the different functions can access the components... 
	
	Why stop here and not go with the OOP deep logic decopulation? 
	
	Do you remember that guy at the history channel? 
	
	"if two theory's explain the same thing go with the less complex and only move in complexity if it fail to explain 
	something... The less complex theory is often true."
	
	We need decopulation but we do not need to take things to a deeper level because it add unnecessary complexity, to 
	start we understand that will affect readability but it may also affect other things, that may look small but if you
	pass them 300 times it is a borden.
	
	In a way we can simplify and say "only the necessary stuff if needed"...
	
	In programming we can easy create thing's that will consume large amount of time, because we need to deal
	with this things lather on... The scrutinization of the necessary element's is needed... 
	
	Though the theory of that guy at the history channel does not explain why the less complex theory is often true, once
   my work become a little more develop that theory becomes absolutely true. If you add layers of complexity that will 
   result in 2 "cent's" of gain it does not pay off the large draw back of adding a layer of complexity. This is because you have to
	deal with the complexity that you created before you can gain those "2 cent's" of automation... 
	
	This is the main reason that i say it's a illusion it seems that there is a gain, but actually there is no gain. The
	true gain comes with simplicity and usability, if something can be easy applied and develop then is the best solution
	because we do need to work with this stuff. We need the most efficient solution that does the job, if we need to raise
	2 levels of complexity then, you should only raise those 2 levels, and not just raise 10 levels with the argument that
	we can.
	
	Those levels of complexity can be essential if the scenario or scoope does not changes. In a previous chapter i
	mention that OOP should only be use at the language level. This is mainly because when you are adding layer of 
	complexity we expect to use these layers, we expect to achieve some kind of gain. Which in this case is to be able to 
	deal with a unknown outcome. Think this is the main reason to use OOP when the amount of variables is so big, that we are not sure
	what will be the end result, then in that case the most logic solution is to go with OOP. We add those layers because
	we need those assumptions, since the end result is not known. Attempting to go with a certainty composition to a
	battle where is no certainty it does not make any logic. Thing's may change, and we are not sure how do they change.
	In this case we are mention changes that happen at the core level, but it could be used to other things... it may 
	be or not needed depending on	the situation we have in hands...
	
	The conclusion is the same of that guy at history channel... More complexity it should only be used when is 
	needed... Though in this case talking about programming it still applies, because we have to deal with the complexity
	that we have created. 
	
	We can create a concept here to attempt to explain how this works... 	
	
	The effectiveness or objectivity of what we are doing is proportional to the relationship of the gain over the layers
	of complexity.
	
	E = g/c : which translates to what we have written, effectiveness is proportion to gain over complexity. Though not a
	mathematics guy not sure how to apply this to a math language, the logic is there. Maybe we need to add a new math symbol
	which is the proportion, g(P)c. 
	
	The current effectiveness of what we are doing is proportional to the gain caming from the complexity of the action 
	involved	in the action we are doing.	
	
	Maybe we can try this way:	
	
	O = (E (P) g/c) 	
	
	Objectivity is equal to the effectiveness gained from applaying layers of complexity. Which translates in to: gain from
	over complexity result in no gain. Or in pseudo gain, because the over complexity, axficite or creates an artificial 
	result of the gain. When you go back and have to subtract the gain over the process or layers of complexity you end
	up with less that you start with. At least from a logic perspective, from a math perspective not sure how this is 
	applied. And in a real world you could always take 5 years to do achieve one result of curse...
	
	The conclusion is to know at what kind of point over complexity become in no gained. Because you structured things so
	much there will be a point that you can't process what you have written. And that is a very realistic result because
	you can use a very slow framework to process 100 request's or a very optimized code can perform 5k request's. 
	
	*it's just a example though some frameworks are really slow...
	
	Math is not may strong, still this are my 5 cent's on math debate... Maybe some one can improve it a bit more...
	
	Coming back to our scoop which is applied logic... 	
	
	I readed that at compilation time C creates a object... This is more or less what i mention... 
	
	When the outcome is knowed and the variations are very limited, we do known that those dependencies will not change that
	much during the application development, while the variables behind the programming language could be greater
	because it need's to represent the hole scoop. It need to be a structure...
	
	In really it uses a unknowned set of variables which are the outcome of a developer code. So since it deals with logic in a loose
	way, it may be the appropriated path to have develop the language or a result in OOP, since is capable of making 
	assumptions due to it's loose set of variables larger in scoope then GTS.
	
	When the set of variables becomes to large it may be getting close to an assumption, and not a certainty in this case. 
	STG deals better with assumptions then
	GTS. GTS will probably will create to much of a mess or is to much of a trouble to deal with a larger set of variables
	which could easy produce a unknowed result. Since it deals first with Generic it will much harder to introduce a new
	set of variables lather on.
	
	If we are sure that the result is not knowed is much better to apply a STG composition then a GTS.
	
	When we are developing a application variables tend to settle down, which means the out come is or will become knowed
	this is the main reason that i think that GTS will over dominate STG in developing application's. Though things may not 
	be obvious to start with they will eventually become. Because apps tend not to change that much. People are suppose to
	create code libraries. In a APP the most reasonable is a GTS while in a structure like a language up front it seems that
	OOP could deal with more scenarios and be more effective.
	
	If people want to use OOP for their apps i having nothing against this debate servers to illustrate the gain that will 
	come in the long run from using the a appropriated logic composition to achieve a result. It may have to do with the fact
	that people in their life use more one type of composition over the other. So a person may be more loose and make more
	assumptions while other is more a person of certainties and uses less assumptions. It may be something implicit to
	people but to develop a app it's good to understand the differences so that you can maximize the performance and 
	productivity.
*/



