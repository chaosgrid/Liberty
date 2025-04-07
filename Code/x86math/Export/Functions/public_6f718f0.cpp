#include "x86math-PCH.h"

PROC_DECLARE(0x6f718f0, internal_6f718f0, public_6f718f0);
extern "C" NAKED register_t __cdecl internal_6f718f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [eax]
        faddp 
        fstp dword ptr ds : [edx]
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ds : [edx+4]
        fld dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [ecx+0x14]
        fmul dword ptr ds : [eax+4]
        xor eax, eax
        faddp 
        fstp dword ptr ds : [edx+8]
        ret 0x10
        UNREACHABLE_TRAP(0x6f718f0)
    }
}
