#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202680);
CLANG_FORWARD_PROC_SYMBOL(public_62403f0);

PROC_DECLARE(0x6202680, internal_6202680, public_6202680);
extern "C" NAKED register_t __cdecl internal_6202680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp public_62403f0
        UNREACHABLE_TRAP(0x6202680)
    }
}
