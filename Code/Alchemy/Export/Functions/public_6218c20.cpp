#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215b50);
CLANG_FORWARD_PROC_SYMBOL(public_6218c20);

PROC_DECLARE(0x6218c20, internal_6218c20, public_6218c20);
extern "C" NAKED register_t __cdecl internal_6218c20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6215b50
        UNREACHABLE_TRAP(0x6218c20)
    }
}
