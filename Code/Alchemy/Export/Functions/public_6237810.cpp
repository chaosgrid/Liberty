#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6237810);
CLANG_FORWARD_PROC_SYMBOL(public_623ebc0);

PROC_DECLARE(0x6237810, internal_6237810, public_6237810);
extern "C" NAKED register_t __cdecl internal_6237810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0x30
        push eax
        mov ecx, offset public_6257b68
        call public_623ebc0
        ret 
        UNREACHABLE_TRAP(0x6237810)
    }
}
