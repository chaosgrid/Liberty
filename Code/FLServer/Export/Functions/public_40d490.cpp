#include "FLServer-PCH.h"

PROC_DECLARE(0x40d490, internal_40d490, public_40d490);
extern "C" NAKED register_t __cdecl internal_40d490()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xB94]
        ret 
        UNREACHABLE_TRAP(0x40d490)
    }
}
