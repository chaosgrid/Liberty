#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232370);
CLANG_FORWARD_PROC_SYMBOL(public_623ebc0);

PROC_DECLARE(0x6232370, internal_6232370, public_6232370);
extern "C" NAKED register_t __cdecl internal_6232370()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0x3C
        push eax
        mov ecx, offset public_6257b14
        call public_623ebc0
        ret 
        UNREACHABLE_TRAP(0x6232370)
    }
}
