#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c9db0);

PROC_DECLARE(0x4c9db0, internal_4c9db0, public_4c9db0);
extern "C" NAKED register_t __cdecl internal_4c9db0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c69a0]
        mov eax, dword ptr ss : [esp+8]
        push 1
        push eax
        call dword ptr ds : [public_5c6028]
        mov dword ptr ds : [esi], eax
        add esp, 8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c9db0)
    }
}
