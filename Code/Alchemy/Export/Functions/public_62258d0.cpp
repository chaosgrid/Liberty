#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62258d0);
CLANG_FORWARD_PROC_SYMBOL(public_6225960);

PROC_DECLARE(0x62258d0, internal_62258d0, public_62258d0);
extern "C" NAKED register_t __cdecl internal_62258d0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_6225960
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62258d0)
    }
}
