#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a700);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623a1a6 _public_623a1a6
#define public_623a1cc _public_623a1cc

PROC_DECLARE(0x623a190, internal_623a190, public_623a190);
extern "C" NAKED register_t __cdecl internal_623a190()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jbe public_623a1a6
        dec eax
        mov dword ptr ds : [esi+0x100], eax
        public_623a1a6 : nop
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jne public_623a1cc
        mov ecx, esi
        mov dword ptr ds : [esi+0x100], 1
        call public_623a700
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_623a1cc : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x623a190)
    }
}

#undef public_623a1a6
#undef public_623a1cc
