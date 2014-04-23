This is a large data set from experimentation with the __worst-case behaviour
of ad-hoc network protocols__. Current protocols analyzed: Collection Tree
Protocol (CTP) and Multihop Link Quality Indicator (MHLQI) for ad-hoc wireless
networks. We searched for network topologies which give (1) worst-case data
delivery ratios, and, separately, (2) (worst-case) energy behaviour of these
protocols, i.e., the number of packet transmission and reception, both for a
single node and summed up for the entire network. These are called
__objectives__ or __fitness functions__.

The methodology exploits a __stochastic optimization technique__, i.e., an
evolutionary algorithm, to generate a large set of network topologies over
which the data delivery (as a percentage of the data sent) is lowest, or the
amount of network traffic is the maximum that the algorithm found within a
certain runtime. Statistics can then be performed upon this data set of _counterexample_
topologies (i.e., counterexample to good performance), and a causal relation
can be verified (through further experimentation) between particular
topological features and particular performance factors, e.g., delivery in
CTP.

Two articles describe this work:

(ASOC 2014) _Bucur, D., Iacca, G., Squillero, G., and Tonda, A. (2014a). The
impact of topology on energy consumption for collection tree protocols: An
experimental assessment through evolutionary computation. Applied Soft
Computing, 16(0):210-222._

(Draft) _Bucur, D., Iacca, G., de Boer, P.T. A Performance Analysis for
Collection Routing: The Impact of Topology and Table Size on Delivery. 2014._

The __format__ of this dataset:

*  There is a _root directory_ for each combination protocol-objective:
CTP-delivery, CTP-energy, MHLQI-energy. Each such directory then has one or more
_subdirectories_ per configuration of experiment, e.g., "CTP-10n-div02-DDR-CONN" 
evaluates CTP over 10-node, 1/2-density connected networks for data delivery, and
"CTP-evo-20n-s-div02" evaluates CTP over 20-node, 1/2-density networks, for total energy.

*  For each experiment, the subdirectory gives all the _topology files_
resulted during the runtime of the algorithm (either with duplicates removed, 
or with duplicates left in). The topologies are directional,
and encoded with one link per line, i.e., "gain    0   29   -16" models a link
from node 0 to node 29 of signal gain -16. They can be used by TOSSIM as is.

For each __delivery__ experiment, the data file named _data-individuals.txt_ is a 
processed summary of the set of topologies. Each line describes one topology (i.e., 16 simulations of it). Line:

1   BJT   0.09722125    0.0367461785215   0.11111   0.0

says that topology BJT was found to have an average DDR of 0.097 (out of 1), 
with a standard deviation of 0.036, a maximum DDR found among simulations of 0.111, and minimum 0.

For each __energy__ experiment, the data file is named
_data-..-individuals.txt_. The following line:

5998    CU4 12665.9375  74.4231724247   12779   12540   D-edges 203    
D-max-degree 15     D-min-degree 3  D-max-in-degree 9   D-min-in-degree 1  
D-max-out-degree 9  D-min-out-degree 1  D-diameter-from0 4  UR-edges 18    
UR-max-degree 3     UR-min-degree 0     UR-connected 0  UR-components 32    DD
18   NSUC.disc 0    CSUC.disc 0     min-CSUC.disc 0     all-sinkless_cycles 0  
NSUC.conn 0     NSUC-D-max-degree 0 NSUC-D-max-in-degree 0 
NSUC-D-max-out-degree 0

summarizes the behaviour and structure of topology CU4 (the identifier in
column 2). This topology is found in file topoCU4.txt in the same
subdirectory). The average fitness value and standard deviation (after 16
simulations) for the topology is in columns 3-4, with the maximum and minimum
fitness among the 16 simulations in the following two columns. The remaining
of the line holds the values of various topological metrics, starting with the
number of network links and node degrees, and ending in values for the
topological metrics DD, NSUC and CSUC (described in our ASOC 2014).
