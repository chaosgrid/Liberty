#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f480c0);

PROC_DECLARE(0x6f480c0, internal_6f480c0, public_6f480c0);
extern "C" NAKED register_t __cdecl internal_6f480c0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [ecx+0xC]
        lea eax, ss:[esp]
        push eax
        push ecx
        mov dword ptr ss : [esp+8], 1
        call dword ptr ds : [public_6fb3524]
        mov eax, dword ptr ss : [esp+8]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f480c0)
    }
}
