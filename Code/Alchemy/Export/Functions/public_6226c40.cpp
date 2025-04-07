#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226c40);
CLANG_FORWARD_PROC_SYMBOL(public_623faf0);

PROC_DECLARE(0x6226c40, internal_6226c40, public_6226c40);
extern "C" NAKED register_t __cdecl internal_6226c40()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623faf0
        UNREACHABLE_TRAP(0x6226c40)
    }
}
