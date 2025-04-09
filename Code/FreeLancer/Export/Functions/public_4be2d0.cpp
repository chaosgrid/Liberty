#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be2d0);

#define public_4be2e0 _public_4be2e0

PROC_DECLARE(0x4be2d0, internal_4be2d0, public_4be2d0);
extern "C" NAKED register_t __cdecl internal_4be2d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67244c]
        test eax, eax
        je public_4be2e0
        mov al, byte ptr ds : [eax+0x164]
        ret 
        public_4be2e0 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x4be2d0)
    }
}

#undef public_4be2e0
