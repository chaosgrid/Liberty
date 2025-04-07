#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ed30);
CLANG_FORWARD_PROC_SYMBOL(public_62446b0);

PROC_DECLARE(0x622ed30, internal_622ed30, public_622ed30);
extern "C" NAKED register_t __cdecl internal_622ed30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_62446b0
        UNREACHABLE_TRAP(0x622ed30)
    }
}
