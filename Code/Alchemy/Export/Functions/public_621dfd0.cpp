#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621e1a0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_621dfe6 _public_621dfe6
#define public_621e00c _public_621e00c

PROC_DECLARE(0x621dfd0, internal_621dfd0, public_621dfd0);
extern "C" NAKED register_t __cdecl internal_621dfd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        jbe public_621dfe6
        dec eax
        mov dword ptr ds : [esi+0x84], eax
        public_621dfe6 : nop
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        jne public_621e00c
        mov ecx, esi
        mov dword ptr ds : [esi+0x84], 1
        call public_621e1a0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621e00c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x621dfd0)
    }
}

#undef public_621dfe6
#undef public_621e00c
