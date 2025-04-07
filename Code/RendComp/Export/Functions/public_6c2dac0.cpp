#include "RendComp-PCH.h"


#define public_6c2dacd _public_6c2dacd
#define public_6c2dad3 _public_6c2dad3

PROC_DECLARE(0x6c2dac0, internal_6c2dac0, public_6c2dac0);
extern "C" NAKED register_t __cdecl internal_6c2dac0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0xFFFFFFFF
        je public_6c2dacd
        test eax, eax
        jne public_6c2dad3
        public_6c2dacd : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6c2dad3 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c2dac0)
    }
}

#undef public_6c2dacd
#undef public_6c2dad3
