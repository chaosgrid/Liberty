#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212c90);
CLANG_FORWARD_PROC_SYMBOL(public_6213b00);

PROC_DECLARE(0x6213b00, internal_6213b00, public_6213b00);
extern "C" NAKED register_t __cdecl internal_6213b00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6212c90
        UNREACHABLE_TRAP(0x6213b00)
    }
}
