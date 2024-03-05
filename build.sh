rm -rf build

[ -d build ] || mkdir build
cd ./build
cmake .. -G "Unix Makefiles"

make VERBOSE=1

#make install
make

cd ..