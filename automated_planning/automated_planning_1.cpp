#include <stdio.h>

//automated planning
void main(){
	//properties of actions
	//boolean deterministic_actions = true;
	boolean nondeterministic_probabilities = true;
	float prob1 = 0.2;
	float prob2 = 0.11;
	float prob3 = 0.65;
	float prob4 = 0.21;
	boolean state_variables_discrete = true;
	boolean finite_state_variables = true;
	boolean unambiguous current_state = true;
	boolean full_observability = true;
	boolean finite_initial_states = true;
	//int action_duration = 0;
	//boolean concurrent_actions = true;
	//objective of plan
	boolean goal_state = true;// false means maximize reward function
	//boolean multiagent = true;
	boolean selfish_agents = false;//false means cooperative
	boolean central_planning = true;//false means separate planning done by each individual agent
	
	//CLASSICAL planning problem, simplest possible
	//1. unique known initial state
	int[] state = [5,3,4,5,3,4,5,2,5,6,32,7];
	//2. durationless actions
	int action_duration = 0;
	//3. deterministic actions
	boolean deterministic_actions = true;
	//4. actions can only be taken one at a time
	boolean concurrent_actions = false;
	//5. single agent
	boolean multiagent = false;
	//plans can be defined as sequences of actions, because it is known in advance which actions are necessary
	
	//DISCRETE TIME MARKOV DECISION PROCESS (MDP)
	//1. durationless actions
	//2. nondeterministic actions with probabiliites
	//3. full observability (if partial observability, then problem is a PARTIALLY OBSERVABLE MDP)
	//4. maximization of a reward function
	//5. single agent
	
	//multi-agent planning is closely related to game theory
	
	
	
	

}