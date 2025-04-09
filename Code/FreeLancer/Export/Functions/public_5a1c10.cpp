#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);

#define public_5a1c30 _public_5a1c30
#define public_5a1c3e _public_5a1c3e

PROC_DECLARE(0x5a1c10, internal_5a1c10, public_5a1c10);
extern "C" NAKED register_t __cdecl internal_5a1c10()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        lea ecx, ds:[edi+0x7C]
        call public_4144f0
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        test esi, esi
        mov byte ptr ds : [edi+0x6C], cl
        je public_5a1c3e
        lea esp, ss:[esp]
        public_5a1c30 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_5a1c30
        public_5a1c3e : nop
        push edi
        call public_59dc00
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5a1c10)
    }
}

#undef public_5a1c30
#undef public_5a1c3e
