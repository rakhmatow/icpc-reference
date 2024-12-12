set(CMAKE_CXX_FLAGS "-O2 -Wl,--stack=67108864 -std=c++17")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DNOT_OJ -pedantic -Wall -Wextra -Wconversion -Wshadow -Wformat=2 -Wlogical-op -Wshift-overflow=2 -Wcast-qual -Wcast-align -Wfatal-errors -fno-sanitize-recover -fstack-protector -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -D_FORTIFY_SOURCE=2")
add_executable(template template.cpp)