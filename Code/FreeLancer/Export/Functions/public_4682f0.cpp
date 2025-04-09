#include "FreeLancer-PCH.h"


#define public_4682f8 _public_4682f8
#define public_468305 _public_468305
#define public_46830c _public_46830c

PROC_DECLARE(0x4682f0, internal_4682f0, public_4682f0);
extern "C" NAKED register_t __cdecl internal_4682f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        test esi, esi
        je public_46830c
        public_4682f8 : nop
        test byte ptr ds : [esi+0x6C], 1
        jne public_468305
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        public_468305 : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_4682f8
        public_46830c : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4682f0)
    }
}

#undef public_4682f8
#undef public_468305
#undef public_46830c
