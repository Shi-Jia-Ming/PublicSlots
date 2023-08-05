cmake_minimum_required(VERSION 3.25)
project(PublicSlots)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "F:/Qt/5.12.2/mingw73_64")



find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

# 添加头文件路径和动态链接库
include_directories(F:\\MySQL\\mysql-8.0.11-winx64\\include)
link_directories(F:\\MySQL\\mysql-8.0.11-winx64\\lib)
link_libraries(libmysql)

add_executable(PublicSlots main.cpp
               QtModule/source/mainwindow.cpp
               QtModule/header/mainwindow.h
               DataBase/Manage/header/Backup.h
               DataBase/Manage/header/Enter.h
               DataBase/Manage/header/Manage.h
               DataBase/Manage/header/Modify.h
               DataBase/Manage/source/Backup.cpp
               DataBase/Manage/source/Enter.cpp
               DataBase/Manage/source/Manage.cpp
               DataBase/Manage/source/Modify.cpp
               DataBase/Show/header/Calculate.h
               DataBase/Show/header/Handle.h
               DataBase/Show/source/Calculate.cpp
               DataBase/Show/source/Handle.cpp
               Slots/header/Slots.h
               Slots/source/Slots.cpp
               Tools/source/ScoreType.cpp
               Tools/source/tools.cpp
               QtModule/source/backupwindow.cpp
               QtModule/header/backupwindow.h
               QtModule/form/backupwindow.ui
               QtModule/source/addformwindow.cpp
               QtModule/header/addformwindow.h
               QtModule/form/addformwindow.ui
               QtModule/source/addwindow.cpp
               QtModule/header/addwindow.h
               QtModule/form/addwindow.ui
               QtModule/source/addfieldwindow.cpp
               QtModule/header/addfieldwindow.h
               QtModule/form/addfieldwindow.ui
               QtModule/source/delwindow.cpp
               QtModule/header/delwindow.h
               QtModule/form/delwindow.ui
               QtModule/source/delformwindow.cpp
               QtModule/header/delformwindow.h
               QtModule/form/delformwindow.ui
               QtModule/source/delfieldwindow.cpp
               QtModule/header/delfieldwindow.h
               QtModule/form/delfieldwindow.ui
               QtModule/source/sortwindow.cpp
               QtModule/header/sortwindow.h
               QtModule/form/sortwindow.ui
               assets/takeatry.qrc)
target_link_libraries(PublicSlots
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        libmysql
        )

if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(DEBUG_SUFFIX)
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt5${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()
