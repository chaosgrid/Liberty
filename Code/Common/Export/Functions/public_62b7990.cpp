#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b7990);

#define public_62b79ec _public_62b79ec

PROC_DECLARE(0x62b7990, internal_62b7990, public_62b7990);
extern "C" NAKED register_t __cdecl internal_62b7990()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x1AC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62b79ec
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx+0x2C]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+0x30]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+0x34]
        fld dword ptr ds : [ecx+0x1AC]
        fld st(3)
        fmul st, st(4)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62b79ec
        fld dword ptr ds : [public_639a1d0]
        ret 4
        public_62b79ec : nop
        fld dword ptr ds : [public_6399408]
        ret 4
        UNREACHABLE_TRAP(0x62b7990)
    }
}

#undef public_62b79ec
