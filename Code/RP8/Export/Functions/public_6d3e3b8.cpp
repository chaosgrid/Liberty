#include "RP8-PCH.h"

PROC_DECLARE(0x6d3e3b8, internal_6d3e3b8, public_6d3e3b8);
extern "C" NAKED register_t __cdecl internal_6d3e3b8()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [edx+0xC]
        fxch st(3)
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx]
        fxch st(3)
        faddp st(4), st
        fsubp st(4), st
        faddp st(4), st
        fsubp st(4), st
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+4]
        fxch st(3)
        faddp st(4), st
        faddp st(4), st
        fsubp st(4), st
        fsubp st(4), st
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+8]
        fxch st(3)
        fsubp st(4), st
        faddp st(4), st
        faddp st(4), st
        fsubp st(4), st
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+4]
        ret 0xC
        UNREACHABLE_TRAP(0x6d3e3b8)
    }
}
