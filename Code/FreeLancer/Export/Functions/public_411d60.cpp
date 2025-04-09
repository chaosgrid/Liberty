#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411d60);

PROC_DECLARE(0x411d60, internal_411d60, public_411d60);
extern "C" NAKED register_t __cdecl internal_411d60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x411d60)
    }
}
