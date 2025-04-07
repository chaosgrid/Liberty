#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42ab3);

PROC_DECLARE(0x6d42ab3, internal_6d42ab3, public_6d42ab3);
extern "C" NAKED register_t __cdecl internal_6d42ab3()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or byte ptr ds : [eax+0x61], 0x10
        ret 
        UNREACHABLE_TRAP(0x6d42ab3)
    }
}
