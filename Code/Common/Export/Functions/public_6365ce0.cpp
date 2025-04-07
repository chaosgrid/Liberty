#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6365ce0);

PROC_DECLARE(0x6365ce0, internal_6365ce0, public_6365ce0);
extern "C" NAKED register_t __cdecl internal_6365ce0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        ret 4
        UNREACHABLE_TRAP(0x6365ce0)
    }
}
