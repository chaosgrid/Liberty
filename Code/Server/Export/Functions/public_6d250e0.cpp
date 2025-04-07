#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d250e0);

PROC_DECLARE(0x6d250e0, internal_6d250e0, public_6d250e0);
extern "C" NAKED register_t __cdecl internal_6d250e0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], offset public_6d6901c
        ret 
        UNREACHABLE_TRAP(0x6d250e0)
    }
}
