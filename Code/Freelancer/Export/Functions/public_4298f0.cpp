#include "Freelancer-PCH.h"


#define public_429901 _public_429901

PROC_DECLARE(0x4298f0, internal_4298f0, public_4298f0);
extern "C" NAKED register_t __cdecl internal_4298f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test byte ptr ds : [esi+0xC], 0x10
        jne public_429901
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0xC]
        public_429901 : nop
        mov eax, dword ptr ds : [esi+0x14]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4298f0)
    }
}

#undef public_429901
