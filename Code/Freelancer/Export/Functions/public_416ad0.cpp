#include "Freelancer-PCH.h"

PROC_DECLARE(0x416ad0, internal_416ad0, public_416ad0);
extern "C" NAKED register_t __cdecl internal_416ad0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xD0]
        ret 
        UNREACHABLE_TRAP(0x416ad0)
    }
}
