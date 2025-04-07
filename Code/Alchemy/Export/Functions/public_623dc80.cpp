#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e4c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623dc96 _public_623dc96
#define public_623dcbc _public_623dcbc

PROC_DECLARE(0x623dc80, internal_623dc80, public_623dc80);
extern "C" NAKED register_t __cdecl internal_623dc80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xB0]
        test eax, eax
        jbe public_623dc96
        dec eax
        mov dword ptr ds : [esi+0xB0], eax
        public_623dc96 : nop
        mov eax, dword ptr ds : [esi+0xB0]
        test eax, eax
        jne public_623dcbc
        mov ecx, esi
        mov dword ptr ds : [esi+0xB0], 1
        call public_623e4c0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_623dcbc : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x623dc80)
    }
}

#undef public_623dc96
#undef public_623dcbc
