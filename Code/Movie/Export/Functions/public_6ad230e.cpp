#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad230e);

#define public_6ad231b _public_6ad231b
#define public_6ad234c _public_6ad234c

PROC_DECLARE(0x6ad230e, internal_6ad230e, public_6ad230e);
extern "C" NAKED register_t __cdecl internal_6ad230e()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_6ada0f8]
        mov esi, offset public_6add57c
        public_6ad231b : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ad234c
        cmp esi, offset public_6add5c0
        je public_6ad234c
        cmp esi, offset public_6add5b0
        je public_6ad234c
        cmp esi, offset public_6add5a0
        je public_6ad234c
        cmp esi, offset public_6add580
        je public_6ad234c
        push eax
        call edi
        push dword ptr ds : [esi]
        call public_6ad07b3
        pop ecx
        public_6ad234c : nop
        add esi, 4
        cmp esi, offset public_6add63c
        jl public_6ad231b
        push dword ptr ds : [public_6add5a0]
        call edi
        push dword ptr ds : [public_6add5b0]
        call edi
        push dword ptr ds : [public_6add5c0]
        call edi
        push dword ptr ds : [public_6add580]
        call edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad230e)
    }
}

#undef public_6ad231b
#undef public_6ad234c
