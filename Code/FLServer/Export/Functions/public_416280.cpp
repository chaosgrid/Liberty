#include "FLServer-PCH.h"

PROC_DECLARE(0x416280, internal_416280, public_416280);
extern "C" NAKED register_t __cdecl internal_416280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x416280)
    }
}
