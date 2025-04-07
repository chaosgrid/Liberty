#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62271e0);
CLANG_FORWARD_PROC_SYMBOL(public_6244690);

PROC_DECLARE(0x62271e0, internal_62271e0, public_62271e0);
extern "C" NAKED register_t __cdecl internal_62271e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_6244690
        UNREACHABLE_TRAP(0x62271e0)
    }
}
