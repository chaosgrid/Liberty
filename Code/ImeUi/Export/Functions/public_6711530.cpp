#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711530, internal_6711530, public_6711530);
extern "C" NAKED register_t __cdecl internal_6711530()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x6711530)
    }
}
