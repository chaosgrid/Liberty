#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c671);

PROC_DECLARE(0x6d4c671, internal_6d4c671, public_6d4c671);
extern "C" NAKED register_t __cdecl internal_6d4c671()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        and dword ptr ds : [eax], 0
        ret 
        UNREACHABLE_TRAP(0x6d4c671)
    }
}
