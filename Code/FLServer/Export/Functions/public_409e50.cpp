#include "FLServer-PCH.h"

PROC_DECLARE(0x409e50, internal_409e50, public_409e50);
extern "C" NAKED register_t __cdecl internal_409e50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2B8]
        ret 
        UNREACHABLE_TRAP(0x409e50)
    }
}
