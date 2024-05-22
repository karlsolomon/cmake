cmake_minimum_required(VERSION 3.29)
project(test)
set(err 1)
set(context ${err} ${CMAKE_CURRENT_LIST_DIR} ${CMAKE_CURRENT_LIST_FILE}
            ${CMAKE_CURRENT_LIST_LINE})
return(PROPAGATE context)
message("return failed")
