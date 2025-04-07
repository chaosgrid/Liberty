#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217640);
CLANG_FORWARD_PROC_SYMBOL(public_6218dc0);

PROC_DECLARE(0x6218dc0, internal_6218dc0, public_6218dc0);
extern "C" NAKED register_t __cdecl internal_6218dc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6217640
        UNREACHABLE_TRAP(0x6218dc0)
    }
}
