#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ac10);
CLANG_FORWARD_PROC_SYMBOL(public_62401a0);

PROC_DECLARE(0x623ac10, internal_623ac10, public_623ac10);
extern "C" NAKED register_t __cdecl internal_623ac10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add edx, 0xC
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], edx
        jmp public_62401a0
        UNREACHABLE_TRAP(0x623ac10)
    }
}
