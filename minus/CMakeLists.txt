SET ( SRC_DIR src )
SET ( INC_DIR include )
SET ( SRCS
	minus.cpp
)
LIST ( TRANSFORM SRCS PREPEND ${SRC_DIR}/ )
ADD_LIBRARY ( minus ${SRCS})
TARGET_INCLUDE_DIRECTORIES ( minus PUBLIC ${INC_DIR} )
