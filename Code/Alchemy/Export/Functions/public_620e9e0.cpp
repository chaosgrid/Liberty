#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_62403f0);

PROC_DECLARE(0x620e9e0, internal_620e9e0, public_620e9e0);
extern "C" NAKED register_t __cdecl internal_620e9e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp public_62403f0
        UNREACHABLE_TRAP(0x620e9e0)
    }
}
