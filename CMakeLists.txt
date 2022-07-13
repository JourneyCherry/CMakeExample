CMAkE_MINIMUM_REQUIRED ( VERSION 3.10 )	#CMAKE 최소 요구 버전.

PROJECT ( CustomOperator )					#프로젝트 명

SET ( LIBS
	pluser
	minuser
	multipler
	divider
)

SET ( BIN_DIR ${CMAKE_CURRENT_LIST_DIR}/build/bin )
SET ( LIB_DIR ${CMAKE_CURRENT_LIST_DIR}/build/lib )

SET ( CMAKE_VERBOSE_MAKEFILE true )		#CMAKE Build시, 작업 내용 출력
SET ( CMAKE_SKIP_INSTALL_ALL_DEPENDENCY true)	#"Install" Target의 Dependency가 all이 되지 않게 설정.

INCLUDE_DIRECTORIES ( include )		#공통 include directory 설정
#INCLUDE_DIRECTORIES ( plus/include )
#INCLUDE_DIRECTORIES ( minus/include )
#INCLUDE_DIRECTORIES ( multiple/include )
#INCLUDE_DIRECTORIES ( divide/include )


ADD_SUBDIRECTORY ( src )
#ADD_SUBDIRECTORY ( ${LIBS} )	//이거 안됨
ADD_SUBDIRECTORY ( plus )
ADD_SUBDIRECTORY ( minus )
ADD_SUBDIRECTORY ( multiple )
ADD_SUBDIRECTORY ( divide )

#ADD_DEPENDENCIES( pluser mytools plus )
#ADD_DEPENDENCIES( minuser mytools minus )
#ADD_DEPENDENCIES( multipler mytools multiple )
#ADD_DEPENDENCIES( divider mytools divide )

SET_TARGET_PROPERTIES(
	pluser
	minuser
	multipler
	divider

	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR}
	ARCHIVE_OUTPUT_DIRECTORY ${LIB_DIR}
)

INSTALL ( TARGETS ${LIBS} OPTIONAL
	RUNTIME DESTINATION ${CMAKE_CURRENT_LIST_DIR}/Bin
	LIBRARY DESTINATION ${CMAKE_CURRENT_LIST_DIR}/Lib
)
