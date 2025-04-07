#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e940);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620e916 _public_620e916
#define public_620e93c _public_620e93c

PROC_DECLARE(0x620e900, internal_620e900, public_620e900);
extern "C" NAKED register_t __cdecl internal_620e900()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xA0]
        test eax, eax
        jbe public_620e916
        dec eax
        mov dword ptr ds : [esi+0xA0], eax
        public_620e916 : nop
        mov eax, dword ptr ds : [esi+0xA0]
        test eax, eax
        jne public_620e93c
        mov ecx, esi
        mov dword ptr ds : [esi+0xA0], 1
        call public_620e940
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_620e93c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620e900)
    }
}

#undef public_620e916
#undef public_620e93c
