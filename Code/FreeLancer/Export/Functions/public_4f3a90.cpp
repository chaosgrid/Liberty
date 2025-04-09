#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f3a90, internal_4f3a90, public_4f3a90);
extern "C" NAKED register_t __cdecl internal_4f3a90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9684]
        mov dword ptr ds : [public_674bb8], eax
        ret 
        UNREACHABLE_TRAP(0x4f3a90)
    }
}
