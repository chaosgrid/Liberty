#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378380);
CLANG_FORWARD_PROC_SYMBOL(public_637c970);
CLANG_FORWARD_PROC_SYMBOL(public_637c990);
CLANG_FORWARD_PROC_SYMBOL(public_637d030);
CLANG_FORWARD_PROC_SYMBOL(public_637d060);

PROC_DECLARE(0x637d030, internal_637d030, public_637d030);
extern "C" NAKED register_t __cdecl internal_637d030()
{
    __asm
    {
        push esi
        call public_637c970
        call public_637c990
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+8]
        push eax
        push esi
        call public_637d060
        push esi
        call public_6378380
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x637d030)
    }
}
