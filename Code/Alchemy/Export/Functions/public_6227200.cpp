#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227200);
CLANG_FORWARD_PROC_SYMBOL(public_62446b0);

PROC_DECLARE(0x6227200, internal_6227200, public_6227200);
extern "C" NAKED register_t __cdecl internal_6227200()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_62446b0
        UNREACHABLE_TRAP(0x6227200)
    }
}
