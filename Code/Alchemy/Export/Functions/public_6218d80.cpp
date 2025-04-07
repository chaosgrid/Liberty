#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218d80);
CLANG_FORWARD_PROC_SYMBOL(public_62401a0);

PROC_DECLARE(0x6218d80, internal_6218d80, public_6218d80);
extern "C" NAKED register_t __cdecl internal_6218d80()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add edx, 0xC
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], edx
        jmp public_62401a0
        UNREACHABLE_TRAP(0x6218d80)
    }
}
