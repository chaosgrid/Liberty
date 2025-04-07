#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6244330);

PROC_DECLARE(0x6226cd0, internal_6226cd0, public_6226cd0);
extern "C" NAKED register_t __cdecl internal_6226cd0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6244330
        UNREACHABLE_TRAP(0x6226cd0)
    }
}
