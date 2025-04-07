#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6330960);

PROC_DECLARE(0x6330960, internal_6330960, public_6330960);
extern "C" NAKED register_t __cdecl internal_6330960()
{
    __asm
    {
        fld dword ptr ds : [public_639a1d0]
        mov eax, dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0xC]
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
        UNREACHABLE_TRAP(0x6330960)
    }
}
