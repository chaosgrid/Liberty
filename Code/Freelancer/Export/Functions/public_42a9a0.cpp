#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a9a0);

#define public_42a9b0 _public_42a9b0
#define public_42a9d2 _public_42a9d2

PROC_DECLARE(0x42a9a0, internal_42a9a0, public_42a9a0);
extern "C" NAKED register_t __cdecl internal_42a9a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov edx, edi
        lea esp, ss:[esp]
        public_42a9b0 : nop
        sub edx, 4
        test esi, esi
        je public_42a9d2
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_42a9d2
        fld dword ptr ds : [esi+0x28]
        fld dword ptr ds : [ecx+0x28]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_42a9d2
        mov dword ptr ds : [edi], ecx
        mov edi, edx
        jmp public_42a9b0
        public_42a9d2 : nop
        mov dword ptr ds : [edi], esi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42a9a0)
    }
}

#undef public_42a9b0
#undef public_42a9d2
