#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51cad0);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);

PROC_DECLARE(0x518ad0, internal_518ad0, public_518ad0);
extern "C" NAKED register_t __cdecl internal_518ad0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push 0x3F
        lea ecx, ds:[esi+0xF8]
        call public_5760d0
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, esi
        call public_51cad0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x518ad0)
    }
}
