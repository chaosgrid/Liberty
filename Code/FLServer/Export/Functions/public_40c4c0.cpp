#include "FLServer-PCH.h"

PROC_DECLARE(0x40c4c0, internal_40c4c0, public_40c4c0);
extern "C" NAKED register_t __cdecl internal_40c4c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xB98]
        ret 
        UNREACHABLE_TRAP(0x40c4c0)
    }
}
