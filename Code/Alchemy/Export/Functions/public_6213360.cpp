#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62134a0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6213376 _public_6213376
#define public_621339c _public_621339c

PROC_DECLARE(0x6213360, internal_6213360, public_6213360);
extern "C" NAKED register_t __cdecl internal_6213360()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xE0]
        test eax, eax
        jbe public_6213376
        dec eax
        mov dword ptr ds : [esi+0xE0], eax
        public_6213376 : nop
        mov eax, dword ptr ds : [esi+0xE0]
        test eax, eax
        jne public_621339c
        mov ecx, esi
        mov dword ptr ds : [esi+0xE0], 1
        call public_62134a0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621339c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6213360)
    }
}

#undef public_6213376
#undef public_621339c
