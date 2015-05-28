#hello world test for GitHub

import time

#starting time
start_time = time.time()

#just a regular counter
counter = 0

while True:
    print "{}. Hello World from Edewin!".format(counter)
    counter += 1
    if counter == 100000 :
        end_time = time.time() - start_time
        my_record = 76.951
        print "\nFinished in: %.3f seconds" % (end_time)
        if my_record < end_time :
            print "Seems that my computer is still faster than yours!"
        else :
            print "Congratulations! Your computer is faster than mine!"
        break
    
    #time.sleep(1)
    
