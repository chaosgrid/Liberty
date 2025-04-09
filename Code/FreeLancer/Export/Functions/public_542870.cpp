#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_53a880);
CLANG_FORWARD_PROC_SYMBOL(public_542870);

PROC_DECLARE(0x542870, internal_542870, public_542870);
extern "C" NAKED register_t __cdecl internal_542870()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0xB0]
        push eax
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        mov ecx, esi
        call public_53a880
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x542870)
    }
}
