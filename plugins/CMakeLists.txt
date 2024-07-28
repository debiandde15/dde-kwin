add_subdirectory(kwin-xcb)
#add_subdirectory(kdecoration)

option(ENABLE_KDECORATION "enable deepin kdecoration plugin" ON)

if (ENABLE_KDECORATION)
    add_subdirectory(kdecoration)
endif()
