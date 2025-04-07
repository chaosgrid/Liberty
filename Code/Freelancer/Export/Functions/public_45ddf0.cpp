#include "Freelancer-PCH.h"

PROC_DECLARE(0x45ddf0, internal_45ddf0, public_45ddf0);
extern "C" NAKED register_t __cdecl internal_45ddf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cee40]
        mov dword ptr ds : [public_66da54], eax
        ret 
        UNREACHABLE_TRAP(0x45ddf0)
    }
}
