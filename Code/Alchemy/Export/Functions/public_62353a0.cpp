#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232730);
CLANG_FORWARD_PROC_SYMBOL(public_62353a0);

PROC_DECLARE(0x62353a0, internal_62353a0, public_62353a0);
extern "C" NAKED register_t __cdecl internal_62353a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        add edx, 4
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+4], edx
        jmp public_6232730
        UNREACHABLE_TRAP(0x62353a0)
    }
}
