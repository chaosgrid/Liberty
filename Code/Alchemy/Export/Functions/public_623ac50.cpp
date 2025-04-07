#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62388b0);
CLANG_FORWARD_PROC_SYMBOL(public_623ac50);

PROC_DECLARE(0x623ac50, internal_623ac50, public_623ac50);
extern "C" NAKED register_t __cdecl internal_623ac50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_62388b0
        UNREACHABLE_TRAP(0x623ac50)
    }
}
