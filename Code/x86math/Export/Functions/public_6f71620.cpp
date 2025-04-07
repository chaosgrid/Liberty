#include "x86math-PCH.h"

PROC_DECLARE(0x6f71620, internal_6f71620, public_6f71620);
extern "C" NAKED register_t __cdecl internal_6f71620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0x18]
        fmul dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [eax+0x1C]
        faddp 
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [eax]
        fmul dword ptr ds : [eax+0x10]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [eax+0x1C]
        fmul dword ptr ds : [eax+0x14]
        fsubp 
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+0xC]
        fsubp 
        fld dword ptr ds : [eax+0x18]
        fmul dword ptr ds : [eax+8]
        fmul dword ptr ds : [eax+0x10]
        fsubp 
        ret 8
        UNREACHABLE_TRAP(0x6f71620)
    }
}
