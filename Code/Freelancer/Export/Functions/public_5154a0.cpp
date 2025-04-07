#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_5154a0);
CLANG_FORWARD_PROC_SYMBOL(public_537ac0);

#define public_5154c7 _public_5154c7
#define public_5154d4 _public_5154d4
#define public_5154e0 _public_5154e0

PROC_DECLARE(0x5154a0, internal_5154a0, public_5154a0);
extern "C" NAKED register_t __cdecl internal_5154a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], edx
        je public_5154c7
        call public_4f7a80
        public_5154c7 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_5154d4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_5154d4 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_5154e0
        call public_537ac0
        public_5154e0 : nop
        mov eax, esi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x5154a0)
    }
}

#undef public_5154c7
#undef public_5154d4
#undef public_5154e0
