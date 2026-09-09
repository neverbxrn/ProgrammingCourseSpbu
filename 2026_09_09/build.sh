MAIN=program.cpp
APP=myprog

if [ ! -f $APP ]; then rm $APP
fi

g++ $MAIN -o $APP

./$APP