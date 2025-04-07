#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239800);
CLANG_FORWARD_PROC_SYMBOL(public_62398f0);

PROC_DECLARE(0x6239800, internal_6239800, public_6239800);
extern "C" NAKED register_t __cdecl internal_6239800()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_62398f0
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6239800)
    }
}
