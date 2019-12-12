
!isEmpty(PROJECT_PRI_INCLUDED):error("projectcommon.pri already included")
PROJECT_PRI_INCLUDED = 1

PROJECT_VERSION = 0.0.1
PROJECT_APP_TARGET = IoAssistant
PROJECT_YEAR = 2019

PROJECT_SOURCE_TREE = $$PWD
isEmpty(PROJECT_BUILD_TREE):PROJECT_BUILD_TREE = $$shadowed($$PWD)

PROJECT_BIN_PATH = $$PROJECT_BUILD_TREE/bin
PROJECT_LIB_PATH = $$PROJECT_BUILD_TREE/lib
PROJECT_PLUGIN_PATH = $$PROJECT_LIB_PATH
PROJECT_DATA_PATH = $$PROJECT_BUILD_TREE/share

!isEqual(PROJECT_SOURCE_TREE, $$PROJECT_BUILD_TREE): copydata = 1

defineReplace(targetName) {
   unset(LIBRARY_NAME)
   LIBRARY_NAME = $$1
   CONFIG(debug, debug|release) {
      !debug_and_release|build_pass {
          mac:RET = $$member(LIBRARY_NAME, 0)_debug
              else:win32:RET = $$member(LIBRARY_NAME, 0)d
      }
   }
   isEmpty(RET):RET = $$LIBRARY_NAME
   return($$RET)
}
