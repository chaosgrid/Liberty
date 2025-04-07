#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad12fc);
CLANG_FORWARD_PROC_SYMBOL(public_6ad136e);
CLANG_FORWARD_PROC_SYMBOL(public_6ad22e5);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5414);

#define public_6ad134c _public_6ad134c

PROC_DECLARE(0x6ad12fc, internal_6ad12fc, public_6ad12fc);
extern "C" NAKED register_t __cdecl internal_6ad12fc()
{
    __asm
    {
        push esi
        call public_6ad22e5
        call dword ptr ds : [public_6ada128]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [public_6add570], eax
        je public_6ad134c
        push 0x74
        push 1
        call public_6ad5414
        mov esi, eax
        pop ecx
        test esi, esi
        pop ecx
        je public_6ad134c
        push esi
        push dword ptr ds : [public_6add570]
        call dword ptr ds : [public_6ada12c]
        test eax, eax
        je public_6ad134c
        push esi
        call public_6ad136e
        pop ecx
        call dword ptr ds : [public_6ada068]
        or dword ptr ds : [esi+4], 0xFFFFFFFF
        push 1
        mov dword ptr ds : [esi], eax
        pop eax
        pop esi
        ret 
        public_6ad134c : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad12fc)
    }
}

#undef public_6ad134c
