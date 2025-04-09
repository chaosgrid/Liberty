#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539820);

#define public_53011b _public_53011b
#define public_530122 _public_530122

PROC_DECLARE(0x5300f0, internal_5300f0, public_5300f0);
extern "C" NAKED register_t __cdecl internal_5300f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call public_539820
        mov ecx, dword ptr ss : [esp+0x10]
        cmp cx, 3
        jb public_53011b
        cmp word ptr ss : [esp+0x12], 2
        jl public_530122
        public_53011b : nop
        mov byte ptr ds : [esi+0xBC], 0
        public_530122 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x5300f0)
    }
}

#undef public_53011b
#undef public_530122
