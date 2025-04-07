#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_623ebc0);

PROC_DECLARE(0x622b3b0, internal_622b3b0, public_622b3b0);
extern "C" NAKED register_t __cdecl internal_622b3b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0x30
        push eax
        mov ecx, offset public_6257a9c
        call public_623ebc0
        ret 
        UNREACHABLE_TRAP(0x622b3b0)
    }
}
