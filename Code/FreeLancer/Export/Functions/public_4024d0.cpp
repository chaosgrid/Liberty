#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4024d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4024e0 _public_4024e0
#define public_4024f3 _public_4024f3

PROC_DECLARE(0x4024d0, internal_4024d0, public_4024d0);
extern "C" NAKED register_t __cdecl internal_4024d0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_4024f3
        push esi
        lea esp, ss:[esp]
        public_4024e0 : nop
        mov esi, dword ptr ds : [eax+0x30]
        push eax
        call public_5b7e1d
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_4024e0
        pop esi
        public_4024f3 : nop
        mov dword ptr ds : [edi], 0
        pop edi
        ret 
        UNREACHABLE_TRAP(0x4024d0)
    }
}

#undef public_4024e0
#undef public_4024f3
