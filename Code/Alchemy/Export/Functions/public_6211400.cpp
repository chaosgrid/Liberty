#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62116f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6211416 _public_6211416
#define public_621143c _public_621143c

PROC_DECLARE(0x6211400, internal_6211400, public_6211400);
extern "C" NAKED register_t __cdecl internal_6211400()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        jbe public_6211416
        dec eax
        mov dword ptr ds : [esi+0x84], eax
        public_6211416 : nop
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        jne public_621143c
        mov ecx, esi
        mov dword ptr ds : [esi+0x84], 1
        call public_62116f0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621143c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6211400)
    }
}

#undef public_6211416
#undef public_621143c
