#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5553b0);

#define public_53ea90 _public_53ea90

PROC_DECLARE(0x53ea60, internal_53ea60, public_53ea60);
extern "C" NAKED register_t __cdecl internal_53ea60()
{
    __asm
    {
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x34]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_53ea90
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ds:[esi+0x3C]
        push eax
        call dword ptr ds : [edx]
        push eax
        call public_5553b0
        add esp, 0xC
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x34], 0x3F800000
        public_53ea90 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53ea60)
    }
}

#undef public_53ea90
