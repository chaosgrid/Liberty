#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76450);
CLANG_FORWARD_PROC_SYMBOL(public_6b766f0);

PROC_DECLARE(0x6b76450, internal_6b76450, public_6b76450);
extern "C" NAKED register_t __cdecl internal_6b76450()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push eax
        push esi
        call public_6b766f0
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6b76450)
    }
}
