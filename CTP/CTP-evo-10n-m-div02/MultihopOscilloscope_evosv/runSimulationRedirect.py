from TOSSIM import *
from tinyos.tossim.TossimApp import *
from random import *
import sys

#n = NescApp("TestNetwork", "app.xml")
#t = Tossim(n.variables.variables())
t = Tossim([])
r = t.radio()

import sys

if len(sys.argv) < 3:
	print "Usage: runSimulation.py TOPOLOGY_FILE EVENTS_FILE"
	sys.exit()
	
topologyFile   = sys.argv[1]
eventsFile     = sys.argv[2]

f = open(topologyFile, "r")
lines = f.readlines()
for line in lines:
  s = line.split()
  if (len(s) > 0):
    if s[0] == "gain":
      r.add(int(s[1]), int(s[2]), float(s[3]))
      print "Link ", s[1], " to ", s[2]

noise = open("noise/light-short.txt", "r")
lines = noise.readlines()
for line in lines:
  str = line.strip()
  if (str != ""):
    val = int(str)
    for i in range(0, 10):
      m = t.getNode(i);
      m.addNoiseTraceReading(val)

f = open(eventsFile, "r")
lines = f.readlines()
for line in lines:
  s = line.split()
  if (len(s) > 0):
    if s[0] == "reboot_event":
      nodeId = int(s[1].split('=')[1])
      time = int(s[2].split('=')[1])
      m = t.getNode(nodeId);
      m.createNoiseModel();
      m.bootAtTime(time)
      print "Booting", nodeId, "at time", time

#for i in range(0, 10):
#  m = t.getNode(i);
#  m.createNoiseModel();
#  # time = randint(t.ticksPerSecond(), 10 * t.ticksPerSecond())
#  time = i * t.ticksPerSecond()
#  m.bootAtTime(time)
#  print "Booting", i, "at time", time

print "Starting simulation."

fEnergy = open("log_energy.txt", "w")
fRouting = open("log_routing.txt", "w")
fApp = open("log_app.txt", "w")

t.addChannel("ENERGY_HANDLER", fEnergy)
t.addChannel("TreeRouting", fRouting)
t.addChannel("App", fApp)

#t.addChannel("Gain", fGain)
#t.addChannel("Route", sys.stdout)
#t.addChannel("Forwarder", sys.stdout)
#t.addChannel("TestNetworkC", sys.stdout)
#t.addChannel("AM", sys.stdout)
#t.addChannel("PointerBug", sys.stdout)
#t.addChannel("QueueC", sys.stdout)
#t.addChannel("Traffic", sys.stdout)
#t.addChannel("Acks", sys.stdout)

while (t.time() < 200 * t.ticksPerSecond()):
  t.runNextEvent()

fEnergy.close()
fRouting.close()
fApp.close()

print "Completed simulation."
