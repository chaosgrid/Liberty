#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350b20);

#define public_6350bac _public_6350bac

PROC_DECLARE(0x6350b20, internal_6350b20, public_6350b20);
extern "C" NAKED register_t __cdecl internal_6350b20()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_63a5460]
        fld st(0)
        fmul dword ptr ds : [eax]
        fsin 
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fsin 
        fstp dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+8]
        fsin 
        fst dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        jne public_6350bac
        fsqrt 
        fdivr dword ptr ds : [public_63a5628]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fst dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fst dword ptr ss : [esp+8]
        fstp dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+8]
        fst dword ptr ds : [ecx+8]
        fld st(0)
        fmulp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        public_6350bac : nop
        fsubr dword ptr ds : [public_63a53d0]
        fsqrt 
        fstp dword ptr ds : [ecx+0xC]
        ret 8
        UNREACHABLE_TRAP(0x6350b20)
    }
}

#undef public_6350bac
