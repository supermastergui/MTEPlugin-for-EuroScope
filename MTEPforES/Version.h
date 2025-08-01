// Version.h
// Revision number is used in next Release build

#pragma once

#ifndef VERSION_NUM_H
#define VERSION_NUM_H

#define STR_(s) #s
#define STR(s) STR_(s)
#define VERSION_MAJOR 4
#define VERSION_MINOR 0
#define VERSION_REVISION 2
#define BUILD_TIME 2410181941

#define VERSION_FILE VERSION_MAJOR,VERSION_MINOR,VERSION_REVISION
#define VERSION_FILE_STR \
    STR(VERSION_MAJOR) \
    "." STR(VERSION_MINOR) \
    "." STR(VERSION_REVISION)

#define VERSION_PRODUCT VERSION_MAJOR,VERSION_MINOR,VERSION_REVISION,BUILD_TIME
#define VERSION_PRODUCT_STR \
    STR(VERSION_MAJOR) \
    "." STR(VERSION_MINOR) \
    "." STR(VERSION_REVISION) \
    "." STR(BUILD_TIME)

#ifdef DEBUG

#define VERSION_DISPLAY VERSION_FILE_STR "-d" STR(BUILD_TIME)

#else

#define VERSION_DISPLAY VERSION_FILE_STR "-r" STR(BUILD_TIME)

#endif // DEBUG

#endif // VERSION_NUM_H

#ifndef COPYRIGHTS
#define COPYRIGHTS

#define PLUGIN_NAME "MTEPlugin"
#define PLUGIN_AUTHOR "Kingfu Chan"
#define PLUGIN_COPYRIGHT "MIT License, Copyright (c) 2021 Kingfu Chan"
#define GITHUB_LINK "https://github.com/KingfuChan/MTEPlugin-for-EuroScope"

#endif // !COPYRIGHTS
