#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62137c0);
CLANG_FORWARD_PROC_SYMBOL(public_62403f0);

PROC_DECLARE(0x62137c0, internal_62137c0, public_62137c0);
extern "C" NAKED register_t __cdecl internal_62137c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp public_62403f0
        UNREACHABLE_TRAP(0x62137c0)
    }
}
