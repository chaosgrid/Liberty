#include "FreeLancer-PCH.h"

PROC_DECLARE(0x416550, internal_416550, public_416550);
extern "C" NAKED register_t __cdecl internal_416550()
{
    __asm
    {
        lea eax, ds:[ecx+0x4C]
        ret 
        UNREACHABLE_TRAP(0x416550)
    }
}
