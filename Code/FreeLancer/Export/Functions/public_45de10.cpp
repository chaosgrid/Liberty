#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45de10, internal_45de10, public_45de10);
extern "C" NAKED register_t __cdecl internal_45de10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cee44]
        mov dword ptr ds : [public_66da4c], eax
        ret 
        UNREACHABLE_TRAP(0x45de10)
    }
}
