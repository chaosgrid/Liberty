#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a590);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623a2b6 _public_623a2b6
#define public_623a2dc _public_623a2dc

PROC_DECLARE(0x623a2a0, internal_623a2a0, public_623a2a0);
extern "C" NAKED register_t __cdecl internal_623a2a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        jbe public_623a2b6
        dec eax
        mov dword ptr ds : [esi+0x8C], eax
        public_623a2b6 : nop
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        jne public_623a2dc
        mov ecx, esi
        mov dword ptr ds : [esi+0x8C], 1
        call public_623a590
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_623a2dc : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x623a2a0)
    }
}

#undef public_623a2b6
#undef public_623a2dc
