#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226f70);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x6226f70, internal_6226f70, public_6226f70);
extern "C" NAKED register_t __cdecl internal_6226f70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x6226f70)
    }
}
