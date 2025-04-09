#include "Freelancer-PCH.h"

PROC_DECLARE(0x416ae0, internal_416ae0, public_416ae0);
extern "C" NAKED register_t __cdecl internal_416ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xD4]
        ret 
        UNREACHABLE_TRAP(0x416ae0)
    }
}
