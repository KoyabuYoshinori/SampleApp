# CMake generated Testfile for 
# Source directory: C:/Users/ykoyabu/my-project2/SampleApp
# Build directory: C:/Users/ykoyabu/my-project2/SampleApp/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[test_my_class]=] "C:/Users/ykoyabu/my-project2/SampleApp/build/Debug/test_my_class.exe")
  set_tests_properties([=[test_my_class]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ykoyabu/my-project2/SampleApp/CMakeLists.txt;30;add_test;C:/Users/ykoyabu/my-project2/SampleApp/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[test_my_class]=] "C:/Users/ykoyabu/my-project2/SampleApp/build/Release/test_my_class.exe")
  set_tests_properties([=[test_my_class]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ykoyabu/my-project2/SampleApp/CMakeLists.txt;30;add_test;C:/Users/ykoyabu/my-project2/SampleApp/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[test_my_class]=] "C:/Users/ykoyabu/my-project2/SampleApp/build/MinSizeRel/test_my_class.exe")
  set_tests_properties([=[test_my_class]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ykoyabu/my-project2/SampleApp/CMakeLists.txt;30;add_test;C:/Users/ykoyabu/my-project2/SampleApp/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[test_my_class]=] "C:/Users/ykoyabu/my-project2/SampleApp/build/RelWithDebInfo/test_my_class.exe")
  set_tests_properties([=[test_my_class]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ykoyabu/my-project2/SampleApp/CMakeLists.txt;30;add_test;C:/Users/ykoyabu/my-project2/SampleApp/CMakeLists.txt;0;")
else()
  add_test([=[test_my_class]=] NOT_AVAILABLE)
endif()
subdirs("extern/googletest")
