#include <iostream>    // using IO functions
#include <string>      // using string
# include <vector>
# include <fstream>
using namespace std;

class rxn_network {

private:

	// Specify the reaction system - used for all models
	//string spec_names[5];                 // names of chemical species
	int N_0[5];                        // initial state
	//int stoich[][];                     // stoichiometry matrix
	//int stoich_react[][];               // stoichiometric matrix for reactants only
	double k[5];                          // rate constants of elementary reactions
	//string param_names[5];                // names of the parameters
	double t_final;                    // termination time (s)
	int N_record;            // number of time points to record
	int fast_rxns[5];                  // indices of the fast reactions
	
	// Only for STS ODE and KMC
	double eps;                	// stiffness level, eps << 1
	
	// Only for TTS KMC
	int num_batches;        	// number of batches to use for microscale steady-state averaging in KMC_TTS
	double delta;              	// accuracy level of microscale averaging, delta << 1
   
public:
	
	rxn_network()	{
		N_record = 1000;
	}	
	
	int get_N_record(){
		return N_record;
	}

/*
Methods
- constructor
- read input file
- plot species profiles
- plot sensitivities
*/
	
};

// Test driver function
int main() {
	
	// Construct a reaction network instance
	rxn_network rn;
	
	cout << rn.get_N_record() << endl;
	
	return 0;
}