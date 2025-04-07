#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ef50);
CLANG_FORWARD_PROC_SYMBOL(public_623ebc0);

PROC_DECLARE(0x620ef50, internal_620ef50, public_620ef50);
extern "C" NAKED register_t __cdecl internal_620ef50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0x3C
        push eax
        mov ecx, offset public_62579a4
        call public_623ebc0
        ret 
        UNREACHABLE_TRAP(0x620ef50)
    }
}
