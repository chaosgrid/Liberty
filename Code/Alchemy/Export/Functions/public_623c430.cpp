#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c430);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x623c430, internal_623c430, public_623c430);
extern "C" NAKED register_t __cdecl internal_623c430()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x623c430)
    }
}
