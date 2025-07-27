import time
import re

RX_BUILD = r"#define VERSION_BUILD (.+)"
RX_TIME = r"#define BUILD_TIME (.+)"

originlines = open("Version.h", 'r').readlines()
newlines = []
for l in originlines:
    mb = re.match(RX_BUILD, l)
    if mb is not None:
        bn = int(mb.group(1)) + 1
        newlines.append('#define VERSION_BUILD {}\n'.format(bn))
    else:
        mt = re.match(RX_TIME, l)
        if mt is not None:
            tm = time.strftime(r"%y%m%d%H%M", time.gmtime())
            newlines.append("#define BUILD_TIME {}\n".format(tm))
        else:
            newlines.append(l)

open("Version.h", 'w').writelines(newlines)
