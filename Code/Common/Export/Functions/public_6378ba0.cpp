#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378ba0);

#define public_6378be5 _public_6378be5

PROC_DECLARE(0x6378ba0, internal_6378ba0, public_6378ba0);
extern "C" NAKED register_t __cdecl internal_6378ba0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x10]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp st(2)
        fstp st(0)
        fcom dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 1
        je public_6378be5
        mov ecx, dword ptr ds : [ecx+8]
        fstp st(0)
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp st(2)
        fstp st(0)
        ret 4
        public_6378be5 : nop
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+8]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edx]
        fmul dword ptr ds : [ecx+0x14]
        faddp 
        fxch 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        ret 4
        UNREACHABLE_TRAP(0x6378ba0)
    }
}

#undef public_6378be5
