#include "x86math-PCH.h"

PROC_DECLARE(0x6f71950, internal_6f71950, public_6f71950);
extern "C" NAKED register_t __cdecl internal_6f71950()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax+0x24]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+0x28]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+0x2C]
        mov ecx, dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+0x18]
        fld st(2)
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld st(3)
        fmul dword ptr ds : [eax]
        faddp 
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [eax+0x1C]
        fld st(2)
        fmul dword ptr ds : [eax+0x10]
        faddp 
        fld st(3)
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+0x20]
        fxch 
        fmul dword ptr ds : [eax+0x14]
        faddp 
        fxch 
        fmul dword ptr ds : [eax+8]
        xor eax, eax
        faddp 
        fstp dword ptr ds : [ecx+8]
        ret 0x10
        UNREACHABLE_TRAP(0x6f71950)
    }
}
