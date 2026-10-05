MAIN=before_refactoring_5.cpp
APP=myprog

if [ ! -f $APP ]; then rm $APP
fi

g++ $MAIN -o $APP

./$APP
