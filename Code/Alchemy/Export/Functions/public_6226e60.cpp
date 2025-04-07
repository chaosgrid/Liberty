#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225240);
CLANG_FORWARD_PROC_SYMBOL(public_6226e60);

PROC_DECLARE(0x6226e60, internal_6226e60, public_6226e60);
extern "C" NAKED register_t __cdecl internal_6226e60()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add edx, 0xC
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], edx
        jmp public_6225240
        UNREACHABLE_TRAP(0x6226e60)
    }
}
