#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239820);
CLANG_FORWARD_PROC_SYMBOL(public_6239890);

PROC_DECLARE(0x6239820, internal_6239820, public_6239820);
extern "C" NAKED register_t __cdecl internal_6239820()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_6239890
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6239820)
    }
}
