#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad1350);
CLANG_FORWARD_PROC_SYMBOL(public_6ad230e);

#define public_6ad136d _public_6ad136d

PROC_DECLARE(0x6ad1350, internal_6ad1350, public_6ad1350);
extern "C" NAKED register_t __cdecl internal_6ad1350()
{
    __asm
    {
        call public_6ad230e
        mov eax, dword ptr ds : [public_6add570]
        cmp eax, 0xFFFFFFFF
        je public_6ad136d
        push eax
        call dword ptr ds : [public_6ada124]
        or dword ptr ds : [public_6add570], 0xFFFFFFFF
        public_6ad136d : nop
        ret 
        UNREACHABLE_TRAP(0x6ad1350)
    }
}

#undef public_6ad136d
