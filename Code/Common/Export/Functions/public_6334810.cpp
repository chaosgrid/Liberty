#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334810);

PROC_DECLARE(0x6334810, internal_6334810, public_6334810);
extern "C" NAKED register_t __cdecl internal_6334810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        inc dword ptr ds : [eax+4]
        ret 
        UNREACHABLE_TRAP(0x6334810)
    }
}
