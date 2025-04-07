#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ed20);
CLANG_FORWARD_PROC_SYMBOL(public_62446a0);

PROC_DECLARE(0x622ed20, internal_622ed20, public_622ed20);
extern "C" NAKED register_t __cdecl internal_622ed20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_62446a0
        UNREACHABLE_TRAP(0x622ed20)
    }
}
