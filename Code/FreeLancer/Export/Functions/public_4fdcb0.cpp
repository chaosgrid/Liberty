#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410fe0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_537860);

PROC_DECLARE(0x4fdcb0, internal_4fdcb0, public_4fdcb0);
extern "C" NAKED register_t __cdecl internal_4fdcb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x30
        push esi
        push eax
        mov esi, ecx
        call public_537860
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+0x12C]
        call public_4f7ef0
        lea edx, ss:[esp+4]
        push edx
        mov ecx, esi
        call public_410fe0
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x4fdcb0)
    }
}
