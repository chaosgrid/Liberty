#include "Server-PCH.h"

PROC_DECLARE(0x6d03ed0, internal_6d03ed0, public_6d03ed0);
extern "C" NAKED register_t __cdecl internal_6d03ed0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        inc eax
        mov dword ptr ds : [ecx+0x14], eax
        ret 
        UNREACHABLE_TRAP(0x6d03ed0)
    }
}
