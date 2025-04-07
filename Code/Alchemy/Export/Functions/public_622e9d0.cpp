#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622c500);
CLANG_FORWARD_PROC_SYMBOL(public_622e9d0);

PROC_DECLARE(0x622e9d0, internal_622e9d0, public_622e9d0);
extern "C" NAKED register_t __cdecl internal_622e9d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_622c500
        UNREACHABLE_TRAP(0x622e9d0)
    }
}
