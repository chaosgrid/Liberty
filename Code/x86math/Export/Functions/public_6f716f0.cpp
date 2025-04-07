#include "x86math-PCH.h"

PROC_DECLARE(0x6f716f0, internal_6f716f0, public_6f716f0);
extern "C" NAKED register_t __cdecl internal_6f716f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [eax+8]
        faddp 
        fstp dword ptr ds : [edx]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax]
        faddp 
        fstp dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax]
        faddp 
        fstp dword ptr ds : [edx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [eax]
        faddp 
        fadd dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [edx+0x24]
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ds : [ecx+0x18]
        faddp 
        fstp dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ds : [ecx+0x1C]
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [ecx+0x10]
        faddp 
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fstp dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [ecx+0x14]
        faddp 
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fstp dword ptr ds : [edx+0x14]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [eax+0x14]
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [eax+0x10]
        faddp 
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fadd dword ptr ds : [eax+0x28]
        fstp dword ptr ds : [edx+0x28]
        fld dword ptr ds : [eax+0x1C]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [ecx+0x18]
        faddp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [eax+0x18]
        faddp 
        fstp dword ptr ds : [edx+0x18]
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [ecx+0x1C]
        fld dword ptr ds : [eax+0x1C]
        fmul dword ptr ds : [ecx+0x10]
        faddp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+0x18]
        faddp 
        fstp dword ptr ds : [edx+0x1C]
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [eax+0x1C]
        fmul dword ptr ds : [ecx+0x14]
        faddp 
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax+0x18]
        faddp 
        fstp dword ptr ds : [edx+0x20]
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [ecx+0x2C]
        fld dword ptr ds : [eax+0x1C]
        fmul dword ptr ds : [ecx+0x28]
        faddp 
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [eax+0x18]
        faddp 
        fadd dword ptr ds : [eax+0x2C]
        xor eax, eax
        fstp dword ptr ds : [edx+0x2C]
        ret 0x10
        UNREACHABLE_TRAP(0x6f716f0)
    }
}
