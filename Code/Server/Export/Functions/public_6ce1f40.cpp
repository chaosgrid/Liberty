#include "Server-PCH.h"

PROC_DECLARE(0x6ce1f40, internal_6ce1f40, public_6ce1f40);
extern "C" NAKED register_t __cdecl internal_6ce1f40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx+0x6C]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+0x70]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+0x74]
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
        UNREACHABLE_TRAP(0x6ce1f40)
    }
}
