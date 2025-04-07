#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620fcb0);
CLANG_FORWARD_PROC_SYMBOL(public_6212240);

PROC_DECLARE(0x6212240, internal_6212240, public_6212240);
extern "C" NAKED register_t __cdecl internal_6212240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_620fcb0
        UNREACHABLE_TRAP(0x6212240)
    }
}
