#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214640);
CLANG_FORWARD_PROC_SYMBOL(public_623faf0);

PROC_DECLARE(0x6214640, internal_6214640, public_6214640);
extern "C" NAKED register_t __cdecl internal_6214640()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623faf0
        UNREACHABLE_TRAP(0x6214640)
    }
}
