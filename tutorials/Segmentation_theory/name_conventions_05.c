/*
	Project	Info
*/

char pjt_title[] = "GPL Segment Library";
char pjt_email[] = "general@saintsoftware.eu.pn";
char pjt_author[] = "jdc"; 
char pjt_folder[] = "games_files/";
char pjt_segment[13] = "loading_menu"; //max leng for array string we will be using + 1 for the end of line /0.
int pjt_bits = 32;
char pjt_platform = "linux"; //

/*
	To reuse code name convention or standard need to be used. 

	Very easy to get a functionality from another procedural library if its uses the same main Segment with the same
	variables, or the same top segment. For example: the image_lib top Segment to load the images dependecys.
	
	To develop a new set of functionality it receives the standard naming variables from "project variables" and 
	"image_lib" by default. This 	seems reader obvious but if this is not done it create a immerse disparity of 
	variations which result in to not be able to reuse code.
	
	You may say that you don't want to make your code public what's the point in using a standard naming convention?
	
	With this argument you decide not to use...
		
	Lather you decide that you need to import another function from another library. You can't because you didn't adopted
	the naming convention, stuff that will be automatic associated no longer is. 
	
	Another point : you are using a already very stable piece of software that it does not need to
	use any kind of convention. Tomorrow a new hardware comes that uses a new type of software and
	some else is already developing and adopting the standard's... did you adopt the standards? Something that is probably
	a matter of configuration now becomes a matter of large amount of development hours.
		
	The situations that generate code conflict's are endless if one is not adopting a standard set of dependency's...		
		
	Adopting a 3 letters abbreviation for all variables may seam a good starting point. Exemple: img_ pjt_ jpg_ etc...
	
	Now let's imagine that a group of people agree let's adopt Segmentation was a standard practice of coding. So you can
	wright the most crasy stuff that you can imagine, it still be usable at other procedural project because it adopted
	the same logic composition standard, variables will not break, if you map them.
	
	why should you use a db_ for any thing not related to a db_ call? and if you want to use something like that well
	re-name your variables to work with the standard. What is the most easy thing to do: that a person know's about the 
	standard and change is style to fit in to the standard or all of us impose our style over the standard and neglect 
	the standards, ending up with code islands that will delay production and development which do not serve us very well.
	
	Not having standards and a deep logic compositions affect's the load of unnecessary stuff. So people 
	often use a library that deals with several format, for example a single library often may deal with 
	32 or 64 bits, windows or linux in the same file. If thing's where build on standards, with a bit of
	decopulation people expect something to be there, old a new libraries will work the same.
	
	All thing's in our society evolved to have a standard, if you go to pluming pipes they use a
	standard size, you take your pipes from Mexico to Europe they still may be used because we have a international standard
	for sizes and for many other things.
	
	There are plenty of variables that people can still rename the way they want, but that does not mean they should be
	able to name all the variables. Because misc naming is not connected it aid in the creating of islands of code. 
	If a logic composition is adopted in a couple of years from now if we need to develop a app... The existing code library's
	are so large that we can mount it in a half of the time we use today. It's a bit to change the paradigm
	 today we work for the code, but if we adopt a logic composition the code one day will work for us.

	In the logn run this will help to automate the code... having a logic composition standard will help in the near future,
	 when things evolve so much, that we can use the machine to code for us, it will much easy so it know's where the things 
	 are. Could understand that the "img_name" standard is used to change image name, etc... Once this standards are adopted
	we could code the machine to recognize the standard and be able to do automatic program other machines.
	
	Naming convention is implicit because when you start to code in Segmentation you want to make your code simple was 
	possible so in a way when you start to reach this simplicity levels you are getting close to a naming convention your
	self. So having one already built in only make your life easy because you will get there one day by your self, 
	this only speed up that process.
	
	It's like the Bee Hive it is only possible to build a society if all members agreed in the same principle which is 
	to	work for a common goal.
*/