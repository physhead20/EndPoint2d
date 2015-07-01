import sys
from ROOT import gSystem
gSystem.Load("libEndPoint2d_EndPoint2d")
from ROOT import sample

try:

    print "PyROOT recognized your class %s" % str(sample)

except NameError:

    print "Failed importing EndPoint2d..."

sys.exit(0)

