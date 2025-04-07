#include "Common-PCH.h"

PROC_DECLARE(0x6269660, internal_6269660, public_6269660);
extern "C" NAKED register_t __cdecl internal_6269660()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        sub eax, 0x20
        ret 
        UNREACHABLE_TRAP(0x6269660)
    }
}
