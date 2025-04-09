#include "Freelancer-PCH.h"


#define public_4298dc _public_4298dc
#define public_4298e3 _public_4298e3
#define public_4298e7 _public_4298e7

PROC_DECLARE(0x4298b0, internal_4298b0, public_4298b0);
extern "C" NAKED register_t __cdecl internal_4298b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi+0xC]
        test al, 8
        jne public_4298e7
        test al, 4
        je public_4298e3
        test al, 0x10
        jne public_4298e3
        mov eax, dword ptr ds : [public_5c6d44]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB0]
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        je public_4298dc
        sub eax, ecx
        public_4298dc : nop
        mov dword ptr ds : [esi+0x14], eax
        or byte ptr ds : [esi+0xC], 0x10
        public_4298e3 : nop
        or byte ptr ds : [esi+0xC], 8
        public_4298e7 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4298b0)
    }
}

#undef public_4298dc
#undef public_4298e3
#undef public_4298e7
