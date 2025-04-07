#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240d50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6240d20 _public_6240d20
#define public_6240d40 _public_6240d40

PROC_DECLARE(0x6240d10, internal_6240d10, public_6240d10);
extern "C" NAKED register_t __cdecl internal_6240d10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        jbe public_6240d20
        dec eax
        mov dword ptr ds : [esi+0x50], eax
        public_6240d20 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        jne public_6240d40
        mov ecx, esi
        mov dword ptr ds : [esi+0x50], 1
        call public_6240d50
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6240d40 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6240d10)
    }
}

#undef public_6240d20
#undef public_6240d40
