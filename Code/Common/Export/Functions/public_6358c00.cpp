#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6358c00);

PROC_DECLARE(0x6358c00, internal_6358c00, public_6358c00);
extern "C" NAKED register_t __cdecl internal_6358c00()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        fsqrt 
        mov ecx, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_63a53d0]
        fmul dword ptr ss : [esp+4]
        fld st(0)
        fld1 
        fpatan 
        fld st(0)
        fmulp 
        fld st(0)
        fmul dword ptr ds : [public_63a5460]
        fsubr dword ptr ds : [public_63a53d0]
        fld st(1)
        fmul st, st(2)
        fmul dword ptr ds : [public_63a5660]
        faddp 
        fstp st(1)
        fld st(0)
        fstp dword ptr ds : [eax]
        fmul st, st(1)
        fstp dword ptr ds : [ecx]
        fstp st(0)
        ret 0x10
        UNREACHABLE_TRAP(0x6358c00)
    }
}
