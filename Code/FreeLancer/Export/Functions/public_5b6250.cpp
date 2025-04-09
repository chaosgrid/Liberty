#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b6250, internal_5b6250, public_5b6250);
extern "C" NAKED register_t __cdecl internal_5b6250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_67ed24], eax
        ret 4
        UNREACHABLE_TRAP(0x5b6250)
    }
}
