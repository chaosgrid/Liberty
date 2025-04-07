#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218ef0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6218756 _public_6218756
#define public_621877c _public_621877c

PROC_DECLARE(0x6218740, internal_6218740, public_6218740);
extern "C" NAKED register_t __cdecl internal_6218740()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        jbe public_6218756
        dec eax
        mov dword ptr ds : [esi+0x8C], eax
        public_6218756 : nop
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        jne public_621877c
        mov ecx, esi
        mov dword ptr ds : [esi+0x8C], 1
        call public_6218ef0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621877c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6218740)
    }
}

#undef public_6218756
#undef public_621877c
