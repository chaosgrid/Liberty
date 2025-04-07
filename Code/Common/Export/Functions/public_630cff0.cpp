#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630cff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_630d01a _public_630d01a
#define public_630d021 _public_630d021

PROC_DECLARE(0x630cff0, internal_630cff0, public_630cff0);
extern "C" NAKED register_t __cdecl internal_630cff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fcf68]
        test eax, eax
        jne public_630d021
        push 8
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_630d01a
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [public_63fcf68], eax
        ret 
        public_630d01a : nop
        xor eax, eax
        mov dword ptr ds : [public_63fcf68], eax
        public_630d021 : nop
        ret 
        UNREACHABLE_TRAP(0x630cff0)
    }
}

#undef public_630d01a
#undef public_630d021
