#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6237e20);
CLANG_FORWARD_PROC_SYMBOL(public_623aa90);

PROC_DECLARE(0x623aa90, internal_623aa90, public_623aa90);
extern "C" NAKED register_t __cdecl internal_623aa90()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6237e20
        UNREACHABLE_TRAP(0x623aa90)
    }
}
