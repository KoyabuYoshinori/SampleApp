# CMakeの最低バージョンを指定
cmake_minimum_required(VERSION 3.29.0)

# プロジェクト名の設定
project(MyTestProject)

# C++の標準を指定（例: C++23）
set(CMAKE_CXX_STANDARD 23)

# GoogleTest をサブモジュールとして追加
add_subdirectory(external/googletest)

# ビルドタイプの設定
set(CMAKE_BUILD_TYPE Debug)

# メインのソースコードを指定(実行ファイル名、コンパイルするソースファイル名)
#add_executable(SampleApp SampleApp.cpp)
add_library(SampleApp SampleApp.cpp)

# テスト用のソースファイルを指定
add_executable(test_my_class test_my_class/test.cpp)

# GoogleTestライブラリをリンク
target_link_libraries(test_my_class gtest gtest_main)

# テストを有効化
enable_testing()

# テストの実行を追加
add_test(NAME test_my_class COMMAND test_my_class)