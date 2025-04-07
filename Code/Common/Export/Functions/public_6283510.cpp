#include "Common-PCH.h"

PROC_DECLARE(0x6283510, internal_6283510, public_6283510);
extern "C" NAKED register_t __cdecl internal_6283510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx+0x74]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+0x78]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+0x7C]
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
        ret 4
        UNREACHABLE_TRAP(0x6283510)
    }
}
