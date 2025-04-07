#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6237390);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6237366 _public_6237366
#define public_623738c _public_623738c

PROC_DECLARE(0x6237350, internal_6237350, public_6237350);
extern "C" NAKED register_t __cdecl internal_6237350()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xC4]
        test eax, eax
        jbe public_6237366
        dec eax
        mov dword ptr ds : [esi+0xC4], eax
        public_6237366 : nop
        mov eax, dword ptr ds : [esi+0xC4]
        test eax, eax
        jne public_623738c
        mov ecx, esi
        mov dword ptr ds : [esi+0xC4], 1
        call public_6237390
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_623738c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6237350)
    }
}

#undef public_6237366
#undef public_623738c
