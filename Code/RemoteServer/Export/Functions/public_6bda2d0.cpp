#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bda2d0, internal_6bda2d0, public_6bda2d0);
extern "C" NAKED register_t __cdecl internal_6bda2d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax+4]
        fsubp 
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [eax]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+4]
        fsubp 
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0xC]
        ret 8
        UNREACHABLE_TRAP(0x6bda2d0)
    }
}
