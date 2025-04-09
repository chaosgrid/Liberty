#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434d10);
CLANG_FORWARD_PROC_SYMBOL(public_434e90);

PROC_DECLARE(0x434e90, internal_434e90, public_434e90);
extern "C" NAKED register_t __cdecl internal_434e90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_5c6020]
        add esp, 4
        push eax
        mov ecx, esi
        call public_434d10
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x434e90)
    }
}
