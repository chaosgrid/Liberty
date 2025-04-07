#include "FLServer-PCH.h"

PROC_DECLARE(0x416570, internal_416570, public_416570);
extern "C" NAKED register_t __cdecl internal_416570()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x416570)
    }
}
