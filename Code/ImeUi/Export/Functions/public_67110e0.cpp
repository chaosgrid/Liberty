#include "ImeUi-PCH.h"

PROC_DECLARE(0x67110e0, internal_67110e0, public_67110e0);
extern "C" NAKED register_t __cdecl internal_67110e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push 5
        push eax
        lea ecx, ds:[esi+4]
        push ecx
        call dword ptr ds : [public_67170d4]
        add esp, 0xC
        mov word ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x67110e0)
    }
}
