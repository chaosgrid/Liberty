#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8b10);

PROC_DECLARE(0x4c8b10, internal_4c8b10, public_4c8b10);
extern "C" NAKED register_t __cdecl internal_4c8b10()
{
    __asm
    {
        fld dword ptr ds : [public_5c75dc]
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
        UNREACHABLE_TRAP(0x4c8b10)
    }
}
