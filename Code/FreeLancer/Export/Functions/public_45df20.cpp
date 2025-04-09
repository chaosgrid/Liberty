#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45df20, internal_45df20, public_45df20);
extern "C" NAKED register_t __cdecl internal_45df20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66da24]
        mov dword ptr ds : [public_66da1c], eax
        ret 
        UNREACHABLE_TRAP(0x45df20)
    }
}
