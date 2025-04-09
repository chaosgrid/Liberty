#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_448680);

PROC_DECLARE(0x448680, internal_448680, public_448680);
extern "C" NAKED register_t __cdecl internal_448680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_5c61fc]
        add esp, 4
        mov dword ptr ds : [esi+0x30], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x448680)
    }
}
