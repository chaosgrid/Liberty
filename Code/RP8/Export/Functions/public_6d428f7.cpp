#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d428f7);

PROC_DECLARE(0x6d428f7, internal_6d428f7, public_6d428f7);
extern "C" NAKED register_t __cdecl internal_6d428f7()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or dword ptr ds : [eax+0x60], 1
        ret 
        UNREACHABLE_TRAP(0x6d428f7)
    }
}
