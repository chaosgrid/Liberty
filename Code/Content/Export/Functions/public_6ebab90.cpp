#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb9af0);

PROC_DECLARE(0x6ebab90, internal_6ebab90, public_6ebab90);
extern "C" NAKED register_t __cdecl internal_6ebab90()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push eax
        lea edx, ss:[esp+4]
        push edx
        mov dword ptr ss : [esp+8], 0x100F
        call public_6eb9af0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ebab90)
    }
}
