#include "x86math-PCH.h"

PROC_DECLARE(0x6f71890, internal_6f71890, public_6f71890);
extern "C" NAKED register_t __cdecl internal_6f71890()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        fadd dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [edx]
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fadd dword ptr ds : [eax+0x28]
        fstp dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+0x18]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ds : [eax+0x1C]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fadd dword ptr ds : [eax+0x2C]
        xor eax, eax
        fstp dword ptr ds : [edx+8]
        ret 0x10
        UNREACHABLE_TRAP(0x6f71890)
    }
}
