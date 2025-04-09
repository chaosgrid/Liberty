#include "Freelancer-PCH.h"

PROC_DECLARE(0x437a40, internal_437a40, public_437a40);
extern "C" NAKED register_t __cdecl internal_437a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_672038], eax
        ret 8
        UNREACHABLE_TRAP(0x437a40)
    }
}
