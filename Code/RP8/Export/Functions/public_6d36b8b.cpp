#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d36b8b);

PROC_DECLARE(0x6d36b8b, internal_6d36b8b, public_6d36b8b);
extern "C" NAKED register_t __cdecl internal_6d36b8b()
{
    __asm
    {
        mov eax, ecx
        and dword ptr ds : [eax], 0
        ret 
        UNREACHABLE_TRAP(0x6d36b8b)
    }
}
