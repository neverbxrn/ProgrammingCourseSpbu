MAIN=program.cpp
APP=./build/myprog

if [ ! -f $APP ]; then rm $APP
fi

g++ $MAIN -o $APP

./$APP
