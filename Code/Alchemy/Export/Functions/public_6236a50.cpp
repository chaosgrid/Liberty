#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236a50);
CLANG_FORWARD_PROC_SYMBOL(public_62403f0);

PROC_DECLARE(0x6236a50, internal_6236a50, public_6236a50);
extern "C" NAKED register_t __cdecl internal_6236a50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp public_62403f0
        UNREACHABLE_TRAP(0x6236a50)
    }
}
