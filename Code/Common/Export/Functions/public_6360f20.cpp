#include "Common-PCH.h"

PROC_DECLARE(0x6360f20, internal_6360f20, public_6360f20);
extern "C" NAKED register_t __cdecl internal_6360f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [public_63a57a0]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fsqrt 
        fstp st(4)
        fxch st(3)
        fdivp st(3), st
        fstp st(0)
        fstp st(0)
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        ret 0xC
        UNREACHABLE_TRAP(0x6360f20)
    }
}
