#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d310);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620b9e0 _public_620b9e0
#define public_620ba00 _public_620ba00

PROC_DECLARE(0x620b9d0, internal_620b9d0, public_620b9d0);
extern "C" NAKED register_t __cdecl internal_620b9d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        jbe public_620b9e0
        dec eax
        mov dword ptr ds : [esi+0x30], eax
        public_620b9e0 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        jne public_620ba00
        mov ecx, esi
        mov dword ptr ds : [esi+0x30], 1
        call public_620d310
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_620ba00 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620b9d0)
    }
}

#undef public_620b9e0
#undef public_620ba00
