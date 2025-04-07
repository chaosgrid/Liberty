#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e4f20);

PROC_DECLARE(0x62e4f20, internal_62e4f20, public_62e4f20);
extern "C" NAKED register_t __cdecl internal_62e4f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fld st(2)
        fmulp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fxch st(2)
        fsqrt 
        fstp st(2)
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x62e4f20)
    }
}
