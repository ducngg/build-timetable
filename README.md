# build-timetable
Or called lecture helper

Use LectureHelperv1mainfileinput.cpp if you have a text file, use LectureHelperv1main.cpp if you want to insert by input to the terminal.

Text file format:

>[course name]

>[weekday] (can be 2/3/4 or mon/tue/wed or monday/tuesday/wednesday)

>[starting time] (use xx'h' for hour and 'p'xx for period (period 1 starts at 6h))

>[end time] (if using hour, this act like the final time of class, if using period, this act like the final period, please look at the examples)

Example: (222.txt)

>P.S. for Engineers

>mon

>9h

>11h

>Sci. Socialism

>2

>15h

>17h

>(Comp. Netw. Labs.)

>4

>(Comp. Netw. Labs.)

>p2

>p6

>Entrepreneurship

>friday

>p2

>p3

>Computer Networks

>fri

>12h

>14h

>Advanced Prog.

>6

>14h

>16h

Result:

<img width="951" alt="image" src="https://github.com/ducngg/build-timetable/assets/89516843/29dadbb8-137a-4b60-916f-7561b05b8fe0">

