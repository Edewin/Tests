#Computer`s Battle Session has just began
#Prepare your machines for a crucial Test
#The test is : Who can count faster through 100 000 
# for this you must run this file from your Terminal ( Linux ), or 
# CommandPromt ( run->cmd - in Windows) with:
# "python ComputersBattle.py" 
# *i`ll supose that you`re already in the folder cloned from GitHub

# GOOD Luck!

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
        my_record = 12.037
        print "\nFinished in: %.3f seconds" % (end_time)
        if my_record < end_time :
            print "Seems that my computer is still faster than yours!"
        else :
            print "Congratulations! Your computer is faster than mine!"
        break
    
    #time.sleep(1)
    
