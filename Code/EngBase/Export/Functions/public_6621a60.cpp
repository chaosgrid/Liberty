#include "EngBase-PCH.h"


#define public_6621a73 _public_6621a73

PROC_DECLARE(0x6621a60, internal_6621a60, public_6621a60);
extern "C" NAKED register_t __cdecl internal_6621a60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        je public_6621a73
        test eax, eax
        je public_6621a73
        mov eax, dword ptr ds : [eax+0x28]
        ret 8
        public_6621a73 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6621a60)
    }
}

#undef public_6621a73
