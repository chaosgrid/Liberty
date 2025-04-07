#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620cce0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620aa20 _public_620aa20
#define public_620aa40 _public_620aa40

PROC_DECLARE(0x620aa10, internal_620aa10, public_620aa10);
extern "C" NAKED register_t __cdecl internal_620aa10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jbe public_620aa20
        dec eax
        mov dword ptr ds : [esi+0x28], eax
        public_620aa20 : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jne public_620aa40
        mov ecx, esi
        mov dword ptr ds : [esi+0x28], 1
        call public_620cce0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_620aa40 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620aa10)
    }
}

#undef public_620aa20
#undef public_620aa40
