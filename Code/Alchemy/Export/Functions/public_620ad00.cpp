#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620cde0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620ad10 _public_620ad10
#define public_620ad30 _public_620ad30

PROC_DECLARE(0x620ad00, internal_620ad00, public_620ad00);
extern "C" NAKED register_t __cdecl internal_620ad00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jbe public_620ad10
        dec eax
        mov dword ptr ds : [esi+0x1C], eax
        public_620ad10 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_620ad30
        mov ecx, esi
        mov dword ptr ds : [esi+0x1C], 1
        call public_620cde0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_620ad30 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620ad00)
    }
}

#undef public_620ad10
#undef public_620ad30
