#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);

PROC_DECLARE(0x6d5ff70, internal_6d5ff70, public_6d5ff70);
extern "C" NAKED register_t __cdecl internal_6d5ff70()
{
    __asm
    {
        sub esp, 0x10
        mov dword ptr ss : [esp+8], offset public_6d8d530
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+4], 0xC
        call dword ptr ds : [public_6d64a4c]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d5ff70)
    }
}
