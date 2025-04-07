#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad9c54);

PROC_DECLARE(0x6ad9c54, internal_6ad9c54, public_6ad9c54);
extern "C" NAKED register_t __cdecl internal_6ad9c54()
{
    __asm
    {
        push 0xFFFFFFFF
        push eax
        mov eax, dword ptr fs : [0]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], esp
        mov dword ptr ss : [esp+0xC], ebp
        lea ebp, ss:[esp+0xC]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6ad9c54)
    }
}
