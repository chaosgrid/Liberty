#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62256a0);
CLANG_FORWARD_PROC_SYMBOL(public_6226ea0);

PROC_DECLARE(0x6226ea0, internal_6226ea0, public_6226ea0);
extern "C" NAKED register_t __cdecl internal_6226ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_62256a0
        UNREACHABLE_TRAP(0x6226ea0)
    }
}
