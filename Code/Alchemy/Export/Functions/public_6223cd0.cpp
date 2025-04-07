#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62242a0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6223ce6 _public_6223ce6
#define public_6223d0c _public_6223d0c

PROC_DECLARE(0x6223cd0, internal_6223cd0, public_6223cd0);
extern "C" NAKED register_t __cdecl internal_6223cd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xB4]
        test eax, eax
        jbe public_6223ce6
        dec eax
        mov dword ptr ds : [esi+0xB4], eax
        public_6223ce6 : nop
        mov eax, dword ptr ds : [esi+0xB4]
        test eax, eax
        jne public_6223d0c
        mov ecx, esi
        mov dword ptr ds : [esi+0xB4], 1
        call public_62242a0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6223d0c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6223cd0)
    }
}

#undef public_6223ce6
#undef public_6223d0c
