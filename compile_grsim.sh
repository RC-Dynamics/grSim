if [ -d build ]; then
    sudo rm -r build
fi

if [ -d bin ]; then
    sudo rm -r bin
fi

mkdir build
cd build
cmake ..
echo "Compiling..."
make -j8
