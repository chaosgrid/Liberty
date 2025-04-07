#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202410);
CLANG_FORWARD_PROC_SYMBOL(public_62277e0);

PROC_DECLARE(0x6202410, internal_6202410, public_6202410);
extern "C" NAKED register_t __cdecl internal_6202410()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62277e0
        UNREACHABLE_TRAP(0x6202410)
    }
}
