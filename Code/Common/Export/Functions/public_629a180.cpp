#include "Common-PCH.h"


#define public_629a1ba _public_629a1ba
#define public_629a1c3 _public_629a1c3

PROC_DECLARE(0x629a180, internal_629a180, public_629a180);
extern "C" NAKED register_t __cdecl internal_629a180()
{
    __asm
    {
        fild dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax+0x8C]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_629a1c3
        mov ecx, dword ptr ds : [ecx+4]
        fsubr dword ptr ds : [ecx+0x198]
        fld dword ptr ds : [public_6399408]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_629a1ba
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_629a1ba : nop
        fstp dword ptr ds : [ecx+0x198]
        ret 4
        public_629a1c3 : nop
        fstp st(0)
        ret 4
        UNREACHABLE_TRAP(0x629a180)
    }
}

#undef public_629a1ba
#undef public_629a1c3
