#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6205720);
CLANG_FORWARD_PROC_SYMBOL(public_620e280);

PROC_DECLARE(0x620e280, internal_620e280, public_620e280);
extern "C" NAKED register_t __cdecl internal_620e280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea ecx, ds:[eax+0xC]
        call public_6205720
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x620e280)
    }
}
