#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a390);

PROC_DECLARE(0x41a390, internal_41a390, public_41a390);
extern "C" NAKED register_t __cdecl internal_41a390()
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
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x41a390)
    }
}
