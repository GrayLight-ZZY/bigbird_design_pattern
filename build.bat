@echo off
REM 删除 build 目录及其内容
rmdir /s /q build

REM 如果 build 目录不存在，则创建它
if not exist build mkdir build

REM 切换到 build 目录
cd build

REM 使用 cmake 生成 Makefile
cmake .. -G "Unix Makefiles"

REM 使用 make 编译项目（显示详细输出）
make VERBOSE=1

REM 安装项目
make install

REM 返回上级目录
cd ..