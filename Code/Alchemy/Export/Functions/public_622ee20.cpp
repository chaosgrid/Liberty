#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ee20);
CLANG_FORWARD_PROC_SYMBOL(public_6244660);

PROC_DECLARE(0x622ee20, internal_622ee20, public_622ee20);
extern "C" NAKED register_t __cdecl internal_622ee20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6244660
        UNREACHABLE_TRAP(0x622ee20)
    }
}
