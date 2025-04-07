#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48800);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);

PROC_DECLARE(0x6b48800, internal_6b48800, public_6b48800);
extern "C" NAKED register_t __cdecl internal_6b48800()
{
    __asm
    {
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b48800)
    }
}
