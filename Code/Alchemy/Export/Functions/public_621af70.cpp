#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_621af80 _public_621af80
#define public_621afa0 _public_621afa0

PROC_DECLARE(0x621af70, internal_621af70, public_621af70);
extern "C" NAKED register_t __cdecl internal_621af70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x5C]
        test eax, eax
        jbe public_621af80
        dec eax
        mov dword ptr ds : [esi+0x5C], eax
        public_621af80 : nop
        mov eax, dword ptr ds : [esi+0x5C]
        test eax, eax
        jne public_621afa0
        mov ecx, esi
        mov dword ptr ds : [esi+0x5C], 1
        call public_621b0f0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621afa0 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x621af70)
    }
}

#undef public_621af80
#undef public_621afa0
