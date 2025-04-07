#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236a80);

PROC_DECLARE(0x6237610, internal_6237610, public_6237610);
extern "C" NAKED register_t __cdecl internal_6237610()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6236a80
        UNREACHABLE_TRAP(0x6237610)
    }
}
