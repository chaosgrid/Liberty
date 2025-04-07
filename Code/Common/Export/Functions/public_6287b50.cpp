#include "Common-PCH.h"

PROC_DECLARE(0x6287b50, internal_6287b50, public_6287b50);
extern "C" NAKED register_t __cdecl internal_6287b50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2AC]
        ret 
        UNREACHABLE_TRAP(0x6287b50)
    }
}
