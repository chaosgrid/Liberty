#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ef90);
CLANG_FORWARD_PROC_SYMBOL(public_623ebc0);

PROC_DECLARE(0x622ef90, internal_622ef90, public_622ef90);
extern "C" NAKED register_t __cdecl internal_622ef90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0x74
        push eax
        mov ecx, offset public_6257ac4
        call public_623ebc0
        ret 
        UNREACHABLE_TRAP(0x622ef90)
    }
}
