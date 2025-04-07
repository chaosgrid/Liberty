#include "Content-PCH.h"

PROC_DECLARE(0x6f1aca0, internal_6f1aca0, public_6f1aca0);
extern "C" NAKED register_t __cdecl internal_6f1aca0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push 1
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f1aca0)
    }
}
