#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b71f40, internal_6b71f40, public_6b71f40);
extern "C" NAKED register_t __cdecl internal_6b71f40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x6b71f40)
    }
}
