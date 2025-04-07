#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6232270);

PROC_DECLARE(0x6232270, internal_6232270, public_6232270);
extern "C" NAKED register_t __cdecl internal_6232270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_622f6a0
        UNREACHABLE_TRAP(0x6232270)
    }
}
