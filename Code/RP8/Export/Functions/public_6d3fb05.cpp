#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3fb05);

PROC_DECLARE(0x6d3fb05, internal_6d3fb05, public_6d3fb05);
extern "C" NAKED register_t __cdecl internal_6d3fb05()
{
    __asm
    {
        mov eax, ecx
        or dword ptr ds : [eax], 0xFFFFFFFF
        or dword ptr ds : [eax+4], 0xFFFFFFFF
        and dword ptr ds : [eax+8], 0
        and dword ptr ds : [eax+0xC], 0
        ret 
        UNREACHABLE_TRAP(0x6d3fb05)
    }
}
