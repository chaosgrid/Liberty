#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711b50, internal_6711b50, public_6711b50);
extern "C" NAKED register_t __cdecl internal_6711b50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push 1
        push 0
        call dword ptr ds : [eax+0x20]
        ret 
        UNREACHABLE_TRAP(0x6711b50)
    }
}
