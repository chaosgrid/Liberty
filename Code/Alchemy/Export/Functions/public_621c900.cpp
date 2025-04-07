#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c940);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_621c916 _public_621c916
#define public_621c93c _public_621c93c

PROC_DECLARE(0x621c900, internal_621c900, public_621c900);
extern "C" NAKED register_t __cdecl internal_621c900()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x108]
        test eax, eax
        jbe public_621c916
        dec eax
        mov dword ptr ds : [esi+0x108], eax
        public_621c916 : nop
        mov eax, dword ptr ds : [esi+0x108]
        test eax, eax
        jne public_621c93c
        mov ecx, esi
        mov dword ptr ds : [esi+0x108], 1
        call public_621c940
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621c93c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x621c900)
    }
}

#undef public_621c916
#undef public_621c93c
