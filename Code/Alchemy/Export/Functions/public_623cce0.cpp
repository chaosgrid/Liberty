#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623cf70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623ccf6 _public_623ccf6
#define public_623cd1c _public_623cd1c

PROC_DECLARE(0x623cce0, internal_623cce0, public_623cce0);
extern "C" NAKED register_t __cdecl internal_623cce0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jbe public_623ccf6
        dec eax
        mov dword ptr ds : [esi+0x100], eax
        public_623ccf6 : nop
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jne public_623cd1c
        mov ecx, esi
        mov dword ptr ds : [esi+0x100], 1
        call public_623cf70
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_623cd1c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x623cce0)
    }
}

#undef public_623ccf6
#undef public_623cd1c
