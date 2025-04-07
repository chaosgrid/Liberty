#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5397f0);

#define public_539802 _public_539802
#define public_539804 _public_539804

PROC_DECLARE(0x5397f0, internal_5397f0, public_5397f0);
extern "C" NAKED register_t __cdecl internal_5397f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_539802
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_539804
        public_539802 : nop
        xor eax, eax
        public_539804 : nop
        mov ecx, eax
        jmp dword ptr ds : [public_5c6a10]
        UNREACHABLE_TRAP(0x5397f0)
    }
}

#undef public_539802
#undef public_539804
