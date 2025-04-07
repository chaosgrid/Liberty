#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57170);

PROC_DECLARE(0x6f57170, internal_6f57170, public_6f57170);
extern "C" NAKED register_t __cdecl internal_6f57170()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+4]
        lea ecx, ss:[esp]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [public_6fb3548]
        mov eax, dword ptr ss : [esp+8]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f57170)
    }
}
