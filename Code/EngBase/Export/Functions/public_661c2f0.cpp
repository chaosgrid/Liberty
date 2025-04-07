#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661c2f0);

PROC_DECLARE(0x661c2f0, internal_661c2f0, public_661c2f0);
extern "C" NAKED register_t __cdecl internal_661c2f0()
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
        UNREACHABLE_TRAP(0x661c2f0)
    }
}
