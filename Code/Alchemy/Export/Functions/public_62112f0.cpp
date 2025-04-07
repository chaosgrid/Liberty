#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211860);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6211306 _public_6211306
#define public_621132c _public_621132c

PROC_DECLARE(0x62112f0, internal_62112f0, public_62112f0);
extern "C" NAKED register_t __cdecl internal_62112f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x13C]
        test eax, eax
        jbe public_6211306
        dec eax
        mov dword ptr ds : [esi+0x13C], eax
        public_6211306 : nop
        mov eax, dword ptr ds : [esi+0x13C]
        test eax, eax
        jne public_621132c
        mov ecx, esi
        mov dword ptr ds : [esi+0x13C], 1
        call public_6211860
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621132c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62112f0)
    }
}

#undef public_6211306
#undef public_621132c
