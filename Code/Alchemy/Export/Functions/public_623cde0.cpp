#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ce20);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623cdf0 _public_623cdf0
#define public_623ce10 _public_623ce10

PROC_DECLARE(0x623cde0, internal_623cde0, public_623cde0);
extern "C" NAKED register_t __cdecl internal_623cde0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x78]
        test eax, eax
        jbe public_623cdf0
        dec eax
        mov dword ptr ds : [esi+0x78], eax
        public_623cdf0 : nop
        mov eax, dword ptr ds : [esi+0x78]
        test eax, eax
        jne public_623ce10
        mov ecx, esi
        mov dword ptr ds : [esi+0x78], 1
        call public_623ce20
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_623ce10 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x623cde0)
    }
}

#undef public_623cdf0
#undef public_623ce10
