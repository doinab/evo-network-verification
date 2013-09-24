import sys, string, os, subprocess, matplotlib.pyplot as plt
from numbers import Number
from decimal import Decimal
import networkx as nx

# start from a topology written as a file of "gain i j lqi" lines
topo_file_name = sys.argv[1]
topo_id = topo_file_name[4:-4]

NO_NODES = 20
G=nx.DiGraph()
G.add_nodes_from(range(NO_NODES))

topo_file = open(topo_file_name, 'r')
line = topo_file.readline()

while line:
    fields = line.split()
    startindex = 0
    if (fields[0] == "gain"):
        startindex = 1

    link = fields[startindex:]

    if (not isinstance(Decimal(link[0]), Number) or \
        not isinstance(Decimal(link[1]), Number) or \
        not isinstance(Decimal(link[2]), Number)):
        continue

    if int(link[0]) != int(link[1]):
        G.add_edge(int(link[0]), int(link[1]))
    line = topo_file.readline()

topo_file.close()

print("D-edges " + str(G.number_of_edges())),

max_dir_degree = reduce(lambda a,b: (a if a>=b else b), G.degree(G.nodes()).values())
min_dir_degree = reduce(lambda a,b: (a if a<=b else b), G.degree(G.nodes()).values())
print("\tD-max-degree " + str(max_dir_degree)),
print("\tD-min-degree " + str(min_dir_degree)),

max_dir_degree = reduce(lambda a,b: (a if a>=b else b), G.in_degree(G.nodes()).values())
min_dir_degree = reduce(lambda a,b: (a if a<=b else b), G.in_degree(G.nodes()).values())
print("\tD-max-in-degree " + str(max_dir_degree)),
print("\tD-min-in-degree " + str(min_dir_degree)),

max_dir_degree = reduce(lambda a,b: (a if a>=b else b), G.out_degree(G.nodes()).values())
min_dir_degree = reduce(lambda a,b: (a if a<=b else b), G.out_degree(G.nodes()).values())
print("\tD-max-out-degree " + str(max_dir_degree)),
print("\tD-min-out-degree " + str(min_dir_degree)),

# draw topology
nx.draw_networkx(G, node_color=[0.4, 0.4, 0.4])
plt.savefig("topo" + topo_id + "_dir.png")

nx.draw_graphviz(G)
nx.write_dot(G, "topo" + topo_id + "_dir.dot")

R = G.reverse(copy=False)
#print R.edges()
sp_from0 = nx.single_source_dijkstra_path_length(R, 0)
#print("SP from 0: " + str(sp_from0))
max_sp_from0 = reduce(lambda a,b: (a if a>=b else b), sp_from0.values())
print("\tD-diameter-from0 " + str(max_sp_from0)),

#sc = nx.simple_cycles(R)
#for i in sc:
#    if len(i)-1 <= 4 and len(i)-1 >= 3 and i[0] != 0:
#        print i, len(i)-1
#print nx.cycle_basis(R, root=0)
#for path in nx.all_simple_paths(R, source=0, target=3):
#    print(path)

#########################
UG = G.to_undirected(True) # only keep reciprocal edges
print("\tUR-edges " + str(UG.number_of_edges())),

max_dir_degree = reduce(lambda a,b: (a if a>=b else b), UG.degree(UG.nodes()).values())
min_dir_degree = reduce(lambda a,b: (a if a<=b else b), UG.degree(UG.nodes()).values())
print("\tUR-max-degree " + str(max_dir_degree)),
print("\tUR-min-degree " + str(min_dir_degree)),

print "\tUR-connected " + ("1" if nx.is_connected(UG) else "0"), 
print "\tUR-components " + str(nx.number_connected_components(UG)), 

sum_component = 0
for i in nx.connected_components(UG):
    if 0 not in i:
        sum_component += len(i) - 1
print "\tUR-sumcomponent-non0 " + str(sum_component), 

# draw topology
nx.draw_networkx(UG, node_color=[0.4, 0.4, 0.4])
plt.savefig("topo" + topo_id + "_nondir.png")

nx.draw_graphviz(UG)
nx.write_dot(UG, "topo" + topo_id + "_nondir.dot")

#########################
UG = G.to_undirected(False)
print("\tU-edges " + str(UG.number_of_edges())),

max_dir_degree = reduce(lambda a,b: (a if a>=b else b), UG.degree(UG.nodes()).values())
min_dir_degree = reduce(lambda a,b: (a if a<=b else b), UG.degree(UG.nodes()).values())
print("\tU-max-degree " + str(max_dir_degree)),
print("\tU-min-degree " + str(min_dir_degree)),

print "\tU-connected " + ("1" if nx.is_connected(UG) else "0"), 
print "\tU-components " + str(nx.number_connected_components(UG)), 

sum_component = 0
for i in nx.connected_components(UG):
    if 0 not in i:
        sum_component += len(i) - 1
print "\tU-sumcomponent-non0 " + str(sum_component), 

#sp_from0 = nx.single_source_dijkstra_path_length(UG, 0)
#print("SP from 0: " + str(sp_from0))
#max_sp_from0 = reduce(lambda a,b: (a if a>=b else b), sp_from0.values())
#print("diameter: " + str(max_sp_from0))
