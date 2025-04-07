#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711b60, internal_6711b60, public_6711b60);
extern "C" NAKED register_t __cdecl internal_6711b60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push 1
        push 1
        call dword ptr ds : [eax+0x20]
        ret 
        UNREACHABLE_TRAP(0x6711b60)
    }
}
