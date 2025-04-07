#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239860);
CLANG_FORWARD_PROC_SYMBOL(public_6239910);

PROC_DECLARE(0x6239860, internal_6239860, public_6239860);
extern "C" NAKED register_t __cdecl internal_6239860()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_6239910
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6239860)
    }
}
