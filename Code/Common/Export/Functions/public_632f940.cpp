#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632f940);

PROC_DECLARE(0x632f940, internal_632f940, public_632f940);
extern "C" NAKED register_t __cdecl internal_632f940()
{
    __asm
    {
        mov eax, ecx
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x632f940)
    }
}
