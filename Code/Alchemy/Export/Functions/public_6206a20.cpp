#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6205720);

PROC_DECLARE(0x6206a20, internal_6206a20, public_6206a20);
extern "C" NAKED register_t __cdecl internal_6206a20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        call public_6205720
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6206a20)
    }
}
