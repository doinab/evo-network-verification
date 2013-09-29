evo-network-verification
========================

This is a large data set from experimentation with the '''worst-case energy behaviour of network protocols'''. Current protocols analyzed: Collection Tree Protocol (CTP) and Multihop Link Quality Indicator (MHLQI) for ad-hoc wireless networks. We looked at the (worst-case) energy behaviour of these protocols, i.e., estimated through the number of packet transmission and reception over wireless interfaces, both for a single node and summed up for the entire network. 

The methodology exploits a '''stochastic optimization technique''', i.e., an evolutionary algorithm, to generate a large set of network topologies over which the amount of network traffic is the maximum that the algorithm found within a certain runtime. The fitness functions to evaluate a topology are: (a) SUM, the total count of network transmission and reception events, and (b) MAX, the highest single-node count of such events.

Statistics can then be performed upon this data set of energy-hungry topologies for each protocol, and a causal relation can be verified (through further experimentation) between particular topological features and, e.g., extreme energy consumption under CTP. 

A journal publication detailing the method is currently under revision.

The format of this dataset:

*  There is a ''root directory'' for each protocol: CTP, MHLQI. Each such directory then has one ''subdirectory'' per configuration of experiment, e.g., "CTP-evo-20n-s-div02" evaluates CTP over 20-node networks, with the SUM fitness, and a network density of 1/2. 

*  For each experiment, the subdirectory gives all the ''topology files'' resulted during the runtime of the algorithm. The topologies are directional, and encoded with one link per line, i.e., "gain    0   29   -16" models a link from node 0 to node 29 of signal gain -16. 

*  Also for each experiment, the ''data file'' data_unique_individuals***.txt is a processed summary of the set of topologies. Here, each ''data line'' processes one topology file; e.g. the following line:

5998    CU4 12665.9375  74.4231724247   12779   12540   D-edges 203     D-max-degree 15     D-min-degree 3  D-max-in-degree 9   D-min-in-degree 1   D-max-out-degree 9  D-min-out-degree 1  D-diameter-from0 4  UR-edges 18     UR-max-degree 3     UR-min-degree 0     UR-connected 0  UR-components 32    DD 18   NSUC.disc 0    CSUC.disc 0     min_CSUC.disc 0     all_sinkless_cycles 0   NSUC.conn 0     NSUC-D-max-degree 0 NSUC-D-max-in-degree 0  NSUC-D-max-out-degree 0

...summarizes the behaviour and structure of topology CU4 (the identifier in column 2). This topology is found in file topoCU4.txt in the same subdirectory). The average fitness value and standard deviation (after 16 simulations) for the topology is in columns 3-4, with the maximum and minimum fitness among the 16 simulations in the following two columns. The remaining of the line holds the values of various topological metrics, starting with the number of network links and node degrees, and ending in values for the topological metrics DD, NSUC and CSUC (described in our publication).
