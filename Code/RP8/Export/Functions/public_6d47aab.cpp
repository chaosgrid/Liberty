#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47aab);

PROC_DECLARE(0x6d47aab, internal_6d47aab, public_6d47aab);
extern "C" NAKED register_t __cdecl internal_6d47aab()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+0xC]
        fxch st(3)
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+0x18]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+0x14]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+0x1C]
        fxch st(3)
        faddp st(4), st
        faddp st(4), st
        faddp st(4), st
        faddp st(4), st
        fld dword ptr ds : [edx+0x30]
        faddp 
        fld dword ptr ds : [edx+0x34]
        faddp st(2), st
        fld dword ptr ds : [edx+0x38]
        faddp st(3), st
        fld dword ptr ds : [edx+0x3C]
        faddp st(4), st
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+4]
        ret 0xC
        UNREACHABLE_TRAP(0x6d47aab)
    }
}
