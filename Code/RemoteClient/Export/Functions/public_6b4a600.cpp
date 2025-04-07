#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4a600);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);

PROC_DECLARE(0x6b4a600, internal_6b4a600, public_6b4a600);
extern "C" NAKED register_t __cdecl internal_6b4a600()
{
    __asm
    {
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b4a600)
    }
}
