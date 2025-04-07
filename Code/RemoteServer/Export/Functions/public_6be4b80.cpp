#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be4b80);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);

PROC_DECLARE(0x6be4b80, internal_6be4b80, public_6be4b80);
extern "C" NAKED register_t __cdecl internal_6be4b80()
{
    __asm
    {
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be4b80)
    }
}
