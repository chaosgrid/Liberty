#include "Freelancer-PCH.h"

PROC_DECLARE(0x406960, internal_406960, public_406960);
extern "C" NAKED register_t __cdecl internal_406960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x14], eax
        ret 4
        UNREACHABLE_TRAP(0x406960)
    }
}
