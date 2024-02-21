rm -rf build

[ -d build ] || mkdir build
cd ./build
cmake ../

make VERBOSE=1

make install

cd ..