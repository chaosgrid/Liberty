#include "Freelancer-PCH.h"

PROC_DECLARE(0x416560, internal_416560, public_416560);
extern "C" NAKED register_t __cdecl internal_416560()
{
    __asm
    {
        lea eax, ds:[ecx+8]
        ret 
        UNREACHABLE_TRAP(0x416560)
    }
}
