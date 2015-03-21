//
// Jeffrey Zhou
// JZhou46
// CS 361
// Linking - From Source Code to Executable Binary
// 9/7/14
//

#include <stdio.h>
#include <stdlib.h>

extern char mainCHello[], * mainCWorld;
extern int mainCGlobal, mainCGlobalArray[], * mainCGlobalPtr,
           mainCInitGlobal, mainCInitGlobalArray[], * mainCInitGlobalPtr;

//Global declarations 
char func2CHello[] = "Hello", * func2CWorld = "World"; 

int func2CGlobal = 16, func2CGlobalArray[16], * func2CGlobalPtr = & func2CGlobal, func2CInitGlobal = 16, func2CInitGlobalArray[16] = {16}, 
* func2CInitGlobalPtr = & func2CInitGlobal; 

static double func2CStaticGlobal = 16, func2CStaticGlobalArray[16], 
* func2CStaticGlobalPtr = & func2CStaticGlobal, func2CStaticInitGlobal = 16, 
func2CStaticInitGlobalArray[16] = {16}, 
* func2CStaticInitGlobalPtr = & func2CStaticInitGlobal;

//Functions
static double func3C( int func3C_arg1, int * func3C_arg2 ){
	printf("%s %s from func3C\n", func2CHello, func2CWorld);	

	int i, count = 0;
	//initializing all global array elements to N and adding them all up
	int func2CGlobalArrayTotal = 0;
	for (i = 0; i < 16; i ++){
		func2CGlobalArray[i] = 16;
		count = func2CGlobalArray[i];
		func2CGlobalArrayTotal = count + func2CGlobalArrayTotal;
	}
	
	//adding up all global variables
	int globalTotal = func2CGlobal + func2CGlobalArrayTotal +  * func2CGlobalPtr
		+ func2CInitGlobal +  func2CInitGlobalArray[0] + * func2CInitGlobalPtr;
	

	//initializing all static global array elements to N and adding them all up
	int staticGlobalArrayTotal = 0;
	for (i = 0; i < 16; i ++){
		func2CStaticGlobalArray[i] = 16;
		count = func2CStaticGlobalArray[i];
		staticGlobalArrayTotal = count + staticGlobalArrayTotal;
	}

	//adding up all static global variables
	int staticGlobalTotal = func2CStaticGlobal + staticGlobalArrayTotal
		+ * func2CStaticGlobalPtr +  func2CStaticInitGlobal + func2CStaticInitGlobalArray[0]
		+ * func2CStaticInitGlobalPtr;
	
	//local variables
	int func2CLocal = 16, func2CLocalArray[16], * func2CLocalPtr = & func2CLocal,
	    func2CInitLocal = 16, func2CInitLocalArray[16] = {16},
	    * func2CInitLocalPtr = & func2CInitLocal;

	//initializing all static global array elements to N and adding them all up
	int func2CLocalArrayTotal = 0;
	for (i = 0; i < 16; i ++){
		func2CLocalArray[i] = 16;
		count = func2CLocalArray[i];
		func2CLocalArrayTotal = count + func2CLocalArrayTotal;
	}
	
	//adding up all local variables
	int localVariables = func2CLocal + func2CLocalArrayTotal + * func2CLocalPtr
		+ func2CInitLocal + func2CInitLocalArray[0]
		+ * func2CInitLocalPtr;

	//static local variables
	static float func2CStaticLocal = 16, func2CStaticLocalArray[16],
		     * func2CStaticLocalPtr = & func2CStaticLocal, func2CStaticInitLocal = 16,
		     func2CStaticInitLocalArray[16] = {16},
		     * func2CStaticInitLocalPtr = & func2CStaticInitLocal;

	//initializing all static local array elements to N and adding them all up
	int staticLocalArrayTotal = 0;
	for (i = 0; i < 16; i ++){
		func2CStaticLocalArray[i] = 16;
		count = func2CStaticLocalArray[i];
		staticLocalArrayTotal = count + staticLocalArrayTotal;
	}

	//adding up all static local variables
	int staticLocalVariables = func2CStaticLocal + staticLocalArrayTotal
		+ * func2CStaticLocalPtr +  func2CStaticInitLocal
		+ func2CStaticInitLocalArray[0] + * func2CStaticInitLocalPtr;
	
	double total =  globalTotal + staticGlobalTotal 
	+ localVariables + staticLocalVariables + func3C_arg1 + * func3C_arg2;
	return total;
}

double func2C( int func2C_arg1, int * func2C_arg2 ){
	printf("%s %s from func2C\n", func2CHello, func2CWorld);
	int i, count = 0;
	//initializing all global array elements to N and adding them all up
	int func2CGlobalArrayTotal = 0;
	for (i = 0; i < 16; i ++){
		func2CGlobalArray[i] = 16;
		count = func2CGlobalArray[i];
		func2CGlobalArrayTotal = count + func2CGlobalArrayTotal;
	}

	//adding up all global variables
	int globalTotal = func2CGlobal + func2CGlobalArrayTotal + 
		* func2CGlobalPtr + func2CInitGlobal +  
		func2CInitGlobalArray[0] + * func2CInitGlobalPtr;
	

	//initializing all static global array elements to N and adding them all up
	int staticGlobalArrayTotal = 0;
	for (i = 0; i < 16; i ++){
		func2CStaticGlobalArray[i] = 16;
		count = func2CStaticGlobalArray[i];
		staticGlobalArrayTotal = count + staticGlobalArrayTotal;
	}

	//adding up all static global variables
	int staticGlobalTotal = func2CStaticGlobal + staticGlobalArrayTotal
		+ * func2CStaticGlobalPtr +  func2CStaticInitGlobal + func2CStaticInitGlobalArray[0]
		+ * func2CStaticInitGlobalPtr;

	//local variables
	int func2CLocal = 16, func2CLocalArray[16], * func2CLocalPtr = &func2CLocal , 
	    func2CInitLocal = 16, func2CInitLocalArray[16] = {16}, 
	    * func2CInitLocalPtr = & func2CInitLocal; 

	//initializing all local array elements to N and adding them all up
	int func2CLocalArrayTotal = 0;
	for (i = 0; i < 16; i ++){
		func2CLocalArray[i] = 16;
		count = func2CLocalArray[i];
		func2CLocalArrayTotal = count + func2CLocalArrayTotal;
	}

	//adding up all local variables
	int localVariables = func2CLocal + func2CLocalArrayTotal + * func2CLocalPtr 
		+ func2CInitLocal + func2CInitLocalArray[0] + * func2CInitLocalPtr;

	//static local variables	
	static float func2CStaticLocal = 16, func2CStaticLocalArray[16], 
		     * func2CStaticLocalPtr = & func2CStaticLocal, func2CStaticInitLocal = 16, 
		     func2CStaticInitLocalArray[16] = {16}, 
		     * func2CStaticInitLocalPtr = & func2CStaticInitLocal; 

	//initializing all local array elements to N and adding them all up
	int staticLocalArrayTotal = 0;
	for (i = 0; i < 16; i ++){
		func2CStaticLocalArray[i] = 16;
		count = func2CStaticLocalArray[i];
		staticLocalArrayTotal = count + staticLocalArrayTotal;
	}

	//adding up all static local variables 
	int staticLocalVariables = func2CStaticLocal + 
		staticLocalArrayTotal + * func2CStaticLocalPtr 
		+ func2CStaticInitLocal + func2CStaticInitLocalArray[0] 
		+ * func2CStaticInitLocalPtr;

	double total = globalTotal + staticGlobalTotal + localVariables 
	+ staticLocalVariables + func2C_arg1 + * func2C_arg2; 

	total = total + func3C ( func2CGlobal, & func2CGlobal);
	return total;
}	
