#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3323d);

PROC_DECLARE(0x6d3323d, internal_6d3323d, public_6d3323d);
extern "C" NAKED register_t __cdecl internal_6d3323d()
{
    __asm
    {
        mov eax, ecx
        and dword ptr ds : [eax+4], 0
        and dword ptr ds : [eax], 0
        ret 
        UNREACHABLE_TRAP(0x6d3323d)
    }
}
