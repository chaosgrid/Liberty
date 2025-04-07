#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202640);
CLANG_FORWARD_PROC_SYMBOL(public_62401a0);

PROC_DECLARE(0x6202640, internal_6202640, public_6202640);
extern "C" NAKED register_t __cdecl internal_6202640()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add edx, 4
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], edx
        jmp public_62401a0
        UNREACHABLE_TRAP(0x6202640)
    }
}
