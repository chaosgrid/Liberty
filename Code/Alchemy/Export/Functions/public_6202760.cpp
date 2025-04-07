#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202760);
CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

PROC_DECLARE(0x6202760, internal_6202760, public_6202760);
extern "C" NAKED register_t __cdecl internal_6202760()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400f0
        UNREACHABLE_TRAP(0x6202760)
    }
}
