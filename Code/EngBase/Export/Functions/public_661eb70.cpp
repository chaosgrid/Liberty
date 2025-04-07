#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661eb70);
CLANG_FORWARD_PROC_SYMBOL(public_6625c00);

PROC_DECLARE(0x661eb70, internal_661eb70, public_661eb70);
extern "C" NAKED register_t __cdecl internal_661eb70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, offset public_662b158
        push eax
        call public_6625c00
        ret 
        UNREACHABLE_TRAP(0x661eb70)
    }
}
