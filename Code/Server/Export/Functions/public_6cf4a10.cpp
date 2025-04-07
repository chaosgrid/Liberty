#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf4a10);

PROC_DECLARE(0x6cf4a10, internal_6cf4a10, public_6cf4a10);
extern "C" NAKED register_t __cdecl internal_6cf4a10()
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
        UNREACHABLE_TRAP(0x6cf4a10)
    }
}
