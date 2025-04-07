#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);

PROC_DECLARE(0x6eb6bb0, internal_6eb6bb0, public_6eb6bb0);
extern "C" NAKED register_t __cdecl internal_6eb6bb0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+8]
        lea ecx, ss:[esp+4]
        push ecx
        lea edx, ss:[esp+4]
        push edx
        mov dword ptr ss : [esp+8], eax
        call dword ptr ds : [public_6fb366c]
        mov eax, dword ptr ss : [esp+0xC]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eb6bb0)
    }
}
