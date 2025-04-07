#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e740);
CLANG_FORWARD_PROC_SYMBOL(public_623faf0);

PROC_DECLARE(0x622e740, internal_622e740, public_622e740);
extern "C" NAKED register_t __cdecl internal_622e740()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623faf0
        UNREACHABLE_TRAP(0x622e740)
    }
}
