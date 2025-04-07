#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6216090);
CLANG_FORWARD_PROC_SYMBOL(public_6219320);

PROC_DECLARE(0x6219320, internal_6219320, public_6219320);
extern "C" NAKED register_t __cdecl internal_6219320()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6216090
        UNREACHABLE_TRAP(0x6219320)
    }
}
