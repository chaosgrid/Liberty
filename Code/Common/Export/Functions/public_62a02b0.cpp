#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a02b0);
CLANG_FORWARD_PROC_SYMBOL(public_630e710);

#define public_62a02ca _public_62a02ca

PROC_DECLARE(0x62a02b0, internal_62a02b0, public_62a02b0);
extern "C" NAKED register_t __cdecl internal_62a02b0()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x14], 3
        je public_62a02ca
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        push eax
        call public_630e710
        add esp, 8
        ret 4
        public_62a02ca : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x62a02b0)
    }
}

#undef public_62a02ca
