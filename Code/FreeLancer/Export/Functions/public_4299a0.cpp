#include "FreeLancer-PCH.h"


#define public_4299bb _public_4299bb
#define public_4299d6 _public_4299d6

PROC_DECLARE(0x4299a0, internal_4299a0, public_4299a0);
extern "C" NAKED register_t __cdecl internal_4299a0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ca230]
        fnstsw ax
        test ah, 0x41
        jne public_4299bb
        mov dword ptr ds : [ecx+0x10], 0x42C80000
        ret 4
        public_4299bb : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ca234]
        fnstsw ax
        test ah, 5
        jp public_4299d6
        mov dword ptr ds : [ecx+0x10], 0xC2C80000
        ret 4
        public_4299d6 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x10], eax
        ret 4
        UNREACHABLE_TRAP(0x4299a0)
    }
}

#undef public_4299bb
#undef public_4299d6
