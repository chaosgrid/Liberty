#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204640);
CLANG_FORWARD_PROC_SYMBOL(public_623ebc0);

PROC_DECLARE(0x6204640, internal_6204640, public_6204640);
extern "C" NAKED register_t __cdecl internal_6204640()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0x34
        push eax
        mov ecx, offset public_6257954
        call public_623ebc0
        ret 
        UNREACHABLE_TRAP(0x6204640)
    }
}
