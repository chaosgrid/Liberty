#include "ImeUi-PCH.h"


#define public_67116ac _public_67116ac

PROC_DECLARE(0x67116a0, internal_67116a0, public_67116a0);
extern "C" NAKED register_t __cdecl internal_67116a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_67116ac
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+8]
        public_67116ac : nop
        ret 
        UNREACHABLE_TRAP(0x67116a0)
    }
}

#undef public_67116ac
