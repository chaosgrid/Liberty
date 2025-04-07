#include "ImeUi-PCH.h"


#define public_671169c _public_671169c

PROC_DECLARE(0x6711690, internal_6711690, public_6711690);
extern "C" NAKED register_t __cdecl internal_6711690()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_671169c
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+4]
        public_671169c : nop
        ret 
        UNREACHABLE_TRAP(0x6711690)
    }
}

#undef public_671169c
