#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215a00);
CLANG_FORWARD_PROC_SYMBOL(public_6218af0);

PROC_DECLARE(0x6218af0, internal_6218af0, public_6218af0);
extern "C" NAKED register_t __cdecl internal_6218af0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        add edx, 4
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+4], edx
        jmp public_6215a00
        UNREACHABLE_TRAP(0x6218af0)
    }
}
