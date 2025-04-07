#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6228b00);
CLANG_FORWARD_PROC_SYMBOL(public_622a930);

PROC_DECLARE(0x622a930, internal_622a930, public_622a930);
extern "C" NAKED register_t __cdecl internal_622a930()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6228b00
        UNREACHABLE_TRAP(0x622a930)
    }
}
