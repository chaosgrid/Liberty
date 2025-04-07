#include "Freelancer-PCH.h"

PROC_DECLARE(0x45de00, internal_45de00, public_45de00);
extern "C" NAKED register_t __cdecl internal_45de00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cee40]
        mov dword ptr ds : [public_66da50], eax
        ret 
        UNREACHABLE_TRAP(0x45de00)
    }
}
