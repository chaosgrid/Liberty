#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d28510);

PROC_DECLARE(0x6d28510, internal_6d28510, public_6d28510);
extern "C" NAKED register_t __cdecl internal_6d28510()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], offset public_6d6959c
        ret 
        UNREACHABLE_TRAP(0x6d28510)
    }
}
