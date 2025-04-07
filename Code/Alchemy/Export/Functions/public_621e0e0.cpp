#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621e120);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_621e0f6 _public_621e0f6
#define public_621e11c _public_621e11c

PROC_DECLARE(0x621e0e0, internal_621e0e0, public_621e0e0);
extern "C" NAKED register_t __cdecl internal_621e0e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x10C]
        test eax, eax
        jbe public_621e0f6
        dec eax
        mov dword ptr ds : [esi+0x10C], eax
        public_621e0f6 : nop
        mov eax, dword ptr ds : [esi+0x10C]
        test eax, eax
        jne public_621e11c
        mov ecx, esi
        mov dword ptr ds : [esi+0x10C], 1
        call public_621e120
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621e11c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x621e0e0)
    }
}

#undef public_621e0f6
#undef public_621e11c
