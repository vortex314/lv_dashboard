cmake_minimum_required(VERSION 3.12)
project(lv_dashboard)

add_executable(lv_dashboard_gtk src/lv_dashboard.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g ")
set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -g ")

file(GLOB_RECURSE LVGL_SRC lvgl/*.c)

add_library( liblvgl_gtk STATIC ${LVGL_SRC})
add_subdirectory(lvgl)

target_include_directories( liblvgl_gtk SYSTEM PRIVATE
    src/lv_gtk
    /usr/include/gtk-3.0
    /usr/include
    /usr/local/include
    /usr/include/glib-2.0
    /usr/lib/x86_64-linux-gnu/glib-2.0/include
    /usr/include/pango-1.0
    /usr/include/harfbuzz
    /usr/include/cairo
    /usr/include/gdk-pixbuf-2.0
    /usr/include/atk-1.0
    /usr/include/freetype2
)

target_sources(lv_dashboard_gtk PRIVATE 
    src/lv_dashboard.cpp 
    ) 

target_include_directories( lv_dashboard_gtk SYSTEM PRIVATE
    src 
    src/lv_gtk
    lv_binding_cpp/lv_cpp
    lv_binding_cpp/lvgl
    lv_binding_cpp/lv_drivers
    )

target_link_libraries(lv_dashboard_gtk 
    -lpthread  
    -l:liblv_binding_cpp_gtk.a
    -l:liblvgl_gtk.a
    -l:liblv_drivers_gtk.a
    -lrt  
    -latomic)


