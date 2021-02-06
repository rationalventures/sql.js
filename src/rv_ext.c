#include "sqlite3.h"

SQLITE_API const void *sqlite3_resultset_ptr(sqlite3_stmt *pStmt){
  Vdbe *pVm;
  pVm = (Vdbe *)pStmt;
  assert( pVm->db );
  return &pVm->pResultSet[0];
}
