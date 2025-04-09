#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);

#define public_5a1373 _public_5a1373

PROC_DECLARE(0x5a1340, internal_5a1340, public_5a1340);
extern "C" NAKED register_t __cdecl internal_5a1340()
{
    __asm
    {
        sub esp, 0x18
        push esi
        lea eax, ss:[esp+4]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        call public_59f0d0
        cmp al, 1
        jne public_5a1373
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], 0
        pop esi
        add esp, 0x18
        ret 4
        public_5a1373 : nop
        xor al, al
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x5a1340)
    }
}

#undef public_5a1373
