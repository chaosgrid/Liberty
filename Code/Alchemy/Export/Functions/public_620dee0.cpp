#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6205620);
CLANG_FORWARD_PROC_SYMBOL(public_620dee0);

PROC_DECLARE(0x620dee0, internal_620dee0, public_620dee0);
extern "C" NAKED register_t __cdecl internal_620dee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6205620
        UNREACHABLE_TRAP(0x620dee0)
    }
}
