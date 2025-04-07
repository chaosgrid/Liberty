#include "Content-PCH.h"

PROC_DECLARE(0x6f28390, internal_6f28390, public_6f28390);
extern "C" NAKED register_t __cdecl internal_6f28390()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [esi+0x10C], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f28390)
    }
}
