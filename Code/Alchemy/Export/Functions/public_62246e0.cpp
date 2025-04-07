#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62246e0);
CLANG_FORWARD_PROC_SYMBOL(public_623ebc0);

PROC_DECLARE(0x62246e0, internal_62246e0, public_62246e0);
extern "C" NAKED register_t __cdecl internal_62246e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0x34
        push eax
        mov ecx, offset public_6257a48
        call public_623ebc0
        ret 
        UNREACHABLE_TRAP(0x62246e0)
    }
}
