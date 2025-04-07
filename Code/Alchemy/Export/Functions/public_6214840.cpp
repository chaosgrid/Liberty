#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214840);
CLANG_FORWARD_PROC_SYMBOL(public_62403f0);

PROC_DECLARE(0x6214840, internal_6214840, public_6214840);
extern "C" NAKED register_t __cdecl internal_6214840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp public_62403f0
        UNREACHABLE_TRAP(0x6214840)
    }
}
