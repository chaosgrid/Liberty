#include "RP8-PCH.h"

PROC_DECLARE(0x6d3ea13, internal_6d3ea13, public_6d3ea13);
extern "C" NAKED register_t __cdecl internal_6d3ea13()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [ecx]
        faddp 
        fchs 
        fstp dword ptr ds : [eax+0xC]
        ret 0xC
        UNREACHABLE_TRAP(0x6d3ea13)
    }
}
