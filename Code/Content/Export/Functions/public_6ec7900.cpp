#include "Content-PCH.h"

PROC_DECLARE(0x6ec7900, internal_6ec7900, public_6ec7900);
extern "C" NAKED register_t __cdecl internal_6ec7900()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push 0
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec7900)
    }
}
