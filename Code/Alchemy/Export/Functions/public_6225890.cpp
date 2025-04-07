#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225890);
CLANG_FORWARD_PROC_SYMBOL(public_6225980);

PROC_DECLARE(0x6225890, internal_6225890, public_6225890);
extern "C" NAKED register_t __cdecl internal_6225890()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_6225980
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6225890)
    }
}
