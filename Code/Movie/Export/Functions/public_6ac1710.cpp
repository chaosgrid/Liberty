#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1060);

#define public_6ac172c _public_6ac172c

PROC_DECLARE(0x6ac1710, internal_6ac1710, public_6ac1710);
extern "C" NAKED register_t __cdecl internal_6ac1710()
{
    __asm
    {
        push 0
        call dword ptr ds : [public_6ada064]
        mov dword ptr ds : [public_6ae0904], eax
        mov eax, dword ptr ds : [public_6ae0930]
        sub eax, 2
        jne public_6ac172c
        jmp public_6ac1060
        public_6ac172c : nop
        ret 
        UNREACHABLE_TRAP(0x6ac1710)
    }
}

#undef public_6ac172c
