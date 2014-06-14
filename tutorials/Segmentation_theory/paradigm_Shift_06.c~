/*
	Old Style paradigm...
*/

class isolate_variables{

char isolate1 = "i only know about my world";
char isolate2 = "i live at this house";

	function inquery(){
		return isolate1 + " ; " + isolate2;	
	}

}


/*

A paradigm shift in the way we understand programming...

Before we understand that our code need to be isolated to minimize the problems that come from logic dependency,know we 
understand things in another way, we could say: "wait a minute we can collaborate using all our variables, they do not need 
to be isolated by all means"...

The fact that or variables are common to all our libraries is what allows for GTS, every one can build a function that
call img_name, since it is a generic declared variable. The loose style is what allows the flexibility that shared 
development needs. Some may thing : The Top to Down logic composition create confusion... but this is not the case when
things have no dependency are handle by other levels this allow that our Segment's only handle the appropriate amount of
necessary stuff. In a way it only add stuff in the current Segment if fit the needs of others.

For example if something does not belong to img_ we put it in jpg_ so the amount of 
dependencies is simple, can be moved around to be more or less generic, while retaining the capability to fit in the 
logic composition. It easy to understand dependencies because the files amount of line's are small.

If "something" new comes that does not fit our current environment of variables we have to say: 
"wait a minute we are here first choose something else, our work have priority". So how do we make our work able to deal
with all this new kind of situations that is thrown at our code...

The main problem is how to we name variables we have to name them to deal with several situations.

The pre_fix handles this very well, img_name. All of other libraries know about img_name, so other can also use name, for
example mod_name to name a model, or a jpg_name that names a jpg though this is recursive, since name is already 
handle by img_. But the point is that it is possible to use all kind's of names was long they are proper referenced...

So it is a complete inversion of OOP, was explained in chapter one in GTS vs STG. Before we can't have generic declared 
variables because we are using a method that does not concern about the generic environment, but in this logic 
composition that is the main concern.

So now we declare our variables not just for the programming language scoope but we start to declare them for all 
Segmentation users. Once they need to develop for "image" they most be aware of its variables. 
They can't override declared variable's names, need to create new ones or different ones. They can't re-declare the 
img_name, because it is already used. Though this is subjective since they are loose one can use them for other things,
was long it does not affect the loading of dependent functionality which could break the code.

In this style we can have 2 functions that do the same thing which are variations of the same:

*/

function update_img_name(){
	//get A, B, C and D variables and aupdate
	...
	img_name = get vars; 
}

function update_img_name_recursive(){
	//get A, B, C , D and Z, y , x variables and aupdate
	...
	img_name = get vars; 
}

*/

We can see that we can develop straight foward since all variables are always available... So one study the logic 
composition once was it does with a framework but in a way that does not affect a person knowledge or need more knowledge
beyond the scoope of the programming language.

Now lets deal with the need to hold values, since in OOP we have every thing in one class or object and it uses setters
and getters to handle logic...

In Segmentation we use the load and unload methods to handle logic for us:

*/

------------------
Character file
-----------------

char char_race = "dwarf";
int char_strength = 0;
int char_agility = 0;
int char_endurance = 0;	
int char_speed = 0;

function load_char(){ // can be done with a array or a structure depending on the situation...
	
	char.race =  char_race; 
	char_strenght = char.strenght;
	char.agility  = char_agility;
	char.endurance =  char_endurance;	
	char.speed  = char_speed;
	
	return char;
}

function unload_char(){ // unload the character from the array or structure back to the general variables. So functions
								// can access again this variables.
	char_race = char.race; 
	char_strenght = char.strenght;
	char_agility = char.agility;
	char_endurance = char.endurance;	
	char_speed = char.speed;
}

------------------------------
Loading file
----------------------

	char_race = "dwarf";
	char_strength = 100;
	char_agility = 50;
	char_endurance = 25;	
	char_speed = 5;
	strength_update(); 
	agility_update();	
	endurance_update();
	char1 = load_char();
	
	// same for char 2
	//...
	char2 = load_char();
	
function battle (end = 1){
	while (end != 0){
		//fight		
		char1 = attacks(char2);		
		char2 = attacks(char1);	
	}
}

unload_char(char1);
strenght_update();
agility_update();	
endurance_update();
status_update();
char1 = load_char();

/*

Often when reach the end level of the code, the character was already used to do what is supposed to do, in most cases 
this is not strictly necessary but if you do not use it this way you can't reuse your code. Though if you apply the rest
of principles mention you can still have a GTS composition, but you can't reuse code because is not logic connected at
this specific level. 

I didn't implement this on my project's since i was developing the theory was i go along but i think the theory is correct, 
we are applying only the necessary stuff, we load and unload to stay with the main Segment which
prevents excessive decopulating or to create another copulation level which result's in to a need to handle a new set of 
dependencies. So this way the dependencies stays simple and loose to handle all kind of access to the Segment Variables. This way
is possible to use functions develop by other dev's and reuse code in a very simplistic and low resource way... 

A more practical example:

*/

char_name = "my_player";
char_race = "dwarf";
char_status();
char1 = char_load();
battle();
char_unload(char1);
if(char_health < 1){ // less then 1
	db_char_update_status();
}

/*
	Doesn't this update all your status? Not really you update the status that you unload, they kind are family functions.
	The load and unload is defined by the user with the functionality it wish, is not up for Segmentation or logic composition
	to define that kind of rules...
	
	Since they are on the same file it will be easy to understand what kind of stuff is being loaded and unloaded...
	
	They work as OOP setter and Getter the only difference is that in here they are at the generic level or GTS while at 
	OOP they are at STG level, which could make a bit of confusion to some people but in a way they are the same thing 
	used in different context.
	
	In here they handle level dependency for the user. So in order to move status in to arrays and out of them, was the same happens
	with OOP setter/getter, they are loading and unloading stuff from a level. The difference is that in here is more 
	obvious to understand logic dependency because it's clear that you can no longer use your main set of variables because 
	they are being	used for another set of settings.
	
	While in OOP is a bit hard to understand why does the object need the setter and getter, it need so later on your code
	does not become NLSC (non logic structure code), because you do not remember all the stuff that o develop, since it
	have implicit logic it will not break. Though this not clear and is often not very well explained to
	people. Why and when it will the logic break in OOP? 
	
	So let's check how this works in OOP:
*/

class character{

	char my_name;
	char my_var;
	char health;
	char stamina;
	
	
	function set_name($name){
		this->my_name = $name;	
	}	
	
	function get_name(){
		return this-> my_name;
	}
}

class dwarf extends character{	
	
	char hammer_blow;	
	char race = 'dwarf';
	
	function set_hammer_blow($stat){
		this->hammer_blow = $stat;	
	}	
	
	function get_race(){
		return this->hammer_blow;
	}
}


basic_char = new character();
basic_char->set_name("Valmorth");
 
char_dwarf = new dwarf();
char_dwarf->set_hammer_blow(100); 

/*
This is a typical STG composition it does not care how the generic stuff is being handle it says well i can define my
dwarf in here and eventually it will reach the generic level. This stuff is great to take care of a set of settings that
will be unknown. You can always add more logic to it or you can handle more races based on your main character, but
it does not handle the generic stuff. In GTS you can't start by coding this low our you will not know what you are doing
some time lather on. So STG can be a force that pushed forward, while GTS says well we shall not push forward let's take
care of the stuff that we already have. Both use logic to handle some stuff for them. One is more visible with the load
and unload method while the setter and getter is to handle the logic that stays inside the class, so in a way it says:
"I'm in charge of the management here do not touch my egg's because i'm taking care of them.". 

Logic in STG handles the management part, while in GTS handles the dependency decopulation, logic does what they can't
do by them selfs. STG can't manage while GTS can't handle dependency decopulation.

In GTS logic loads and unloads to handle the level dependency, and in STG logic set and get to do management for the class.

In a way they are inverting logic to handle the stuff they can't do by them self's.

Since STG is develop at singularity it can't go to a more simple level, since is already at the singularity, means it can't 
handle management alone so it apply logic at the management level. In other words STG start's with singularity where 
already have things decopulated it does not need more decopulation it needs management.

While GTS is at the generic level is already doing management so logic need to handle decopulation, because you can't leave
generic and go some where else, so it need to decopulate, in this case logic is used to handle a decopulation for it.

To explain the word "decopulate" : is level layer or a different scoop. In the case of GTS it: load to a diferent scoop
and unloads back to the main scoope. While in STG it need management since it does not need another 
simplification layer was it already at the simplest or at singularity level, that's way the variables are
wraped in classes to not handle generic logic, still they need management.

*/