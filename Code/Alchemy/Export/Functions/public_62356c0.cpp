#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62401a0);

PROC_DECLARE(0x62356c0, internal_62356c0, public_62356c0);
extern "C" NAKED register_t __cdecl internal_62356c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add edx, 0xC
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], edx
        jmp public_62401a0
        UNREACHABLE_TRAP(0x62356c0)
    }
}
