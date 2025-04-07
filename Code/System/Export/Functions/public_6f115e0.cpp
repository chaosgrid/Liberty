#include "System-PCH.h"


#define public_6f115f0 _public_6f115f0
#define public_6f115fd _public_6f115fd
#define public_6f11603 _public_6f11603

PROC_DECLARE(0x6f115e0, internal_6f115e0, public_6f115e0);
extern "C" NAKED register_t __cdecl internal_6f115e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax+8]
        test esi, esi
        je public_6f11603
        lea esp, ss:[esp]
        public_6f115f0 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6f115fd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        public_6f115fd : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6f115f0
        public_6f11603 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f115e0)
    }
}

#undef public_6f115f0
#undef public_6f115fd
#undef public_6f11603
