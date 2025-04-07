#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c9c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_621c806 _public_621c806
#define public_621c82c _public_621c82c

PROC_DECLARE(0x621c7f0, internal_621c7f0, public_621c7f0);
extern "C" NAKED register_t __cdecl internal_621c7f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        jbe public_621c806
        dec eax
        mov dword ptr ds : [esi+0x80], eax
        public_621c806 : nop
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        jne public_621c82c
        mov ecx, esi
        mov dword ptr ds : [esi+0x80], 1
        call public_621c9c0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621c82c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x621c7f0)
    }
}

#undef public_621c806
#undef public_621c82c
