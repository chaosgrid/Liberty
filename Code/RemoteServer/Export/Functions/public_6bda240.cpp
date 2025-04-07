#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bda240, internal_6bda240, public_6bda240);
extern "C" NAKED register_t __cdecl internal_6bda240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [eax]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+0xC]
        fsubp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+8]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+4]
        fsubp 
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fsubp 
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xC], eax
        fsubp 
        fstp dword ptr ds : [ecx]
        fxch 
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+8]
        ret 4
        UNREACHABLE_TRAP(0x6bda240)
    }
}
