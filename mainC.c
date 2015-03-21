//
// Jeffrey Zhou
// JZhou46
// CS 361
// Linking - From Source Code to Executable Binary
// 9/7/14
//
#include <stdio.h>
#include <stdlib.h>

extern double func2C( int func2C_arg1, int * func2C_arg2 );

extern char func2CHello[], * func2CWorld;
extern int func2CGlobal, func2CGlobalArray[], *func2CGlobalPtr,
            func2CInitGlobal, func2CInitGlobalArray[],*func2CInitGlobalPtr;

//Global declarations
char mainCHello[] = "Hello", * mainCWorld = "World";

int  mainCGlobal = 16, mainCGlobalArray[16], * mainCGlobalPtr = & mainCGlobal, 
mainCInitGlobal = 16, mainCInitGlobalArray[16] = {16}, 
* mainCInitGlobalPtr = & mainCInitGlobal; 

static double mainCStaticGlobal = 16, mainCStaticGlobalArray[16], 
* mainCStaticGlobalPtr = & mainCStaticGlobal, 
mainCStaticInitGlobal = 16, 
mainCStaticInitGlobalArray[16] = {16}, 
* mainCStaticInitGlobalPtr = & mainCStaticInitGlobal; 


double func1C( int func1C_arg1, int * func1C_arg2 ){
	printf("%s %s from func1C\n", mainCHello, mainCWorld);
	//initializing all global array elements to 16 and adding them all up
	int i, mainCGlobalArrayTotal = 0, count = 0;
	for(i = 0; i < 16; i++){
		mainCGlobalArray[i] = 16;
		count = mainCGlobalArray[i];
		mainCGlobalArrayTotal = count + mainCGlobalArrayTotal;
	}

	//adding up all the global variables
	int globalTotal = mainCGlobal + mainCGlobalArrayTotal + * mainCGlobalPtr 
		+ mainCInitGlobal + mainCInitGlobalArray[0] + * mainCInitGlobalPtr;

	//initializing all static global array elements to 16 and adding them all up
	int staticGlobalArrayTotal = 0;
	for(i = 0; i < 16; i++){
		mainCStaticGlobalArray[i] = 16;
		count = mainCStaticGlobalArray[i];
		staticGlobalArrayTotal = count + staticGlobalArrayTotal;
	}

	//adidng up all static global variables
	int staticGlobalTotal = mainCStaticGlobal + staticGlobalArrayTotal 
		+ * mainCStaticGlobalPtr + mainCStaticInitGlobal 
		+ mainCStaticInitGlobalArray[0] + * mainCStaticInitGlobalPtr;

	//Local variables
	int func1CLocal = 16, func1CLocalArray[16], * func1CLocalPtr = & func1CLocal,
	    func1CInitLocal = 16, func1CInitLocalArray[16] = {16},
	    * func1CInitLocalPtr = & func1CInitLocal;

	//initializing all array elements to 16 and adding them all up
	int func1CLocalArrayTotal = 0;
	for(i = 0; i < 16; i++){
		func1CLocalArray[i] = 16;
		count = func1CLocalArray[i];
		func1CLocalArrayTotal = count + func1CLocalArrayTotal;
	}

	//adding up all local variables
	int func1CLocalTotal = func1CLocal + func1CLocalArrayTotal
		+ * func1CLocalPtr + func1CInitLocal 
		+ func1CInitLocalArray[0] + * func1CInitLocalPtr;

	//static float local variables
	static float func1CStaticLocal = 16, func1CStaticLocalArray[16],
		     * func1CStaticLocalPtr = & func1CStaticLocal,
		     func1CStaticInitLocal = 16,
		     func1CStaticInitLocalArray[16] = {16},
		     * func1CStaticInitLocalPtr = & func1CStaticInitLocal;

	//initializing all array elements to 16 and adding them all up
	int staticLocalArrayTotal = 0; 
	for(i = 0; i < 16; i++){
		func1CStaticLocalArray[i] = 16;
		count = func1CStaticLocalArray[i];
		staticLocalArrayTotal = count + staticLocalArrayTotal;
	}

	//adding up static float local variables
	int func1CStaticFloatTotal = func1CStaticLocal + staticLocalArrayTotal
		+  * func1CStaticLocalPtr + func1CStaticInitLocal + func1CStaticInitLocalArray[0]
		+  * func1CStaticInitLocalPtr;

	double total =  globalTotal + staticGlobalTotal + func1CLocalTotal + func1CStaticFloatTotal + func1C_arg1 + * func1C_arg2;
	return total;
}

int main( int argc, char **argv ){
	printf("--------------------\n");
	printf("  Jeffrey Zhou\n");
	printf("  Jzhou46\n");
	printf("--------------------\n");
	
	printf("%s %s from mainC\n", mainCHello, mainCWorld);
	//initializing all global array elements to 16 and adding them all up
	int i, mainCGlobalArrayTotal = 0, count = 0;
	for(i = 0; i < 16; i++){
		mainCGlobalArray[i] = 16;
		count = mainCGlobalArray[i];
		mainCGlobalArrayTotal = count + mainCGlobalArrayTotal;
	}

	//adding up all the global variables
	int globalTotal = mainCGlobal + mainCGlobalArrayTotal + * mainCGlobalPtr
		+ mainCInitGlobal + mainCInitGlobalArray[0] + * mainCInitGlobalPtr;

	//initializing all static global array elements to 16 and adding them all up
	int staticGlobalArrayTotal = 0;
	for(i = 0; i < 16; i++){
		mainCStaticGlobalArray[i] = 16;
		count = mainCStaticGlobalArray[i];
		staticGlobalArrayTotal = count + staticGlobalArrayTotal;
	}

	//adidng up all static global variables
	int staticGlobalTotal = mainCStaticGlobal + staticGlobalArrayTotal
		+ * mainCStaticGlobalPtr + mainCStaticInitGlobal
		+ mainCStaticInitGlobalArray[0] + * mainCStaticInitGlobalPtr;

	//Local Declarations	
	int mainLocal = 16, mainLocalArray[16], * mainLocalPtr = &mainLocal, 
	    mainInitLocal = 16, mainInitLocalArray[16] = {16}, 
	    * mainInitLocalPtr = & mainInitLocal; 

	//initializing all array elements to 16 and adding them all up
	int mainLocalArrayTotal = 0;
	for(i = 0; i < 16; i++){
		mainLocalArray[i] = 16;
		count = mainLocalArray[i];
		mainLocalArrayTotal = count + mainLocalArrayTotal;
	}

	//adding all main local variables 
	int mainLocalTotal = mainLocal + mainLocalArrayTotal + * mainLocalPtr + 	mainInitLocal	+ mainInitLocalArray[0] + * mainInitLocalPtr;

	//static float local variables 
	static float mainStaticLocal = 16, mainStaticLocalArray[16], 
		     * mainStaticLocalPtr = & mainStaticLocal, 
		     mainStaticInitLocal = 16, 
		     mainStaticInitLocalArray[16] = {16}, 
		     * mainStaticInitLocalPtr = & mainStaticInitLocal; 

	//initializing all array elements to 16 and adding them all up
	int staticLocalArrayTotal = 0;
	for(i = 0; i < 16; i++){
		mainStaticLocalArray[i] = 16;
		count = mainStaticLocalArray[i];
		staticLocalArrayTotal = count + staticLocalArrayTotal;
	}	

	//adding up all static float variables 
	int staticFloatTotal = mainStaticLocal + staticLocalArrayTotal
		+ * mainStaticLocalPtr + mainStaticInitLocal + mainStaticInitLocalArray[0] + * mainStaticInitLocalPtr;
	
	int a = func2C(func2CGlobal, & func2CGlobal);
	double b = (double) a;


	double total = globalTotal + staticGlobalTotal + mainLocalTotal 
	+ staticFloatTotal + func1C(mainCGlobal, & mainCGlobal)
	+ b;
	
	printf("The grand total of all variables in the program is %f\n", total);

}


