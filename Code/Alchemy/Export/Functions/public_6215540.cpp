#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215540);
CLANG_FORWARD_PROC_SYMBOL(public_62199c0);
CLANG_FORWARD_PROC_SYMBOL(public_623ebc0);

PROC_DECLARE(0x6215540, internal_6215540, public_6215540);
extern "C" NAKED register_t __cdecl internal_6215540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0x30
        push eax
        mov ecx, offset public_6257a04
        call public_623ebc0
        jmp public_62199c0
        UNREACHABLE_TRAP(0x6215540)
    }
}
