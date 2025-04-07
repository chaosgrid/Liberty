#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);

#define public_4101f0 _public_4101f0
#define public_410214 _public_410214

PROC_DECLARE(0x4101e0, internal_4101e0, public_4101e0);
extern "C" NAKED register_t __cdecl internal_4101e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_6164e0]
        test esi, esi
        je public_410214
        nop 
        lea esp, ss:[esp]
        public_4101f0 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        lea edx, ds:[esi+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA4]
        and byte ptr ds : [esi+0xB4], 0xEF
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_4101f0
        public_410214 : nop
        mov dword ptr ds : [public_6164e0], 0
        mov dword ptr ds : [public_6164e4], 0
        mov dword ptr ds : [public_6164e8], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4101e0)
    }
}

#undef public_4101f0
#undef public_410214
