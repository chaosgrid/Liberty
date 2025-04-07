#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212690);
CLANG_FORWARD_PROC_SYMBOL(public_6244660);

PROC_DECLARE(0x6212690, internal_6212690, public_6212690);
extern "C" NAKED register_t __cdecl internal_6212690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6244660
        UNREACHABLE_TRAP(0x6212690)
    }
}
