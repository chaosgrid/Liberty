#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620cd60);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620ab20 _public_620ab20
#define public_620ab40 _public_620ab40

PROC_DECLARE(0x620ab10, internal_620ab10, public_620ab10);
extern "C" NAKED register_t __cdecl internal_620ab10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jbe public_620ab20
        dec eax
        mov dword ptr ds : [esi+0x28], eax
        public_620ab20 : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jne public_620ab40
        mov ecx, esi
        mov dword ptr ds : [esi+0x28], 1
        call public_620cd60
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_620ab40 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620ab10)
    }
}

#undef public_620ab20
#undef public_620ab40
