#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48c20);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d48c39 _public_6d48c39
#define public_6d48c53 _public_6d48c53
#define public_6d48c5c _public_6d48c5c

PROC_DECLARE(0x6d48c20, internal_6d48c20, public_6d48c20);
extern "C" NAKED register_t __cdecl internal_6d48c20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d48c39
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_6d48c39 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6d48c5c
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d48c53
        cmp cl, 0xFF
        je public_6d48c53
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d48c5c
        public_6d48c53 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d48c5c : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d48c20)
    }
}

#undef public_6d48c39
#undef public_6d48c53
#undef public_6d48c5c
