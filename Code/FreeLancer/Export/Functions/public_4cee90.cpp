#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4cee90, internal_4cee90, public_4cee90);
extern "C" NAKED register_t __cdecl internal_4cee90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d7954]
        mov dword ptr ds : [public_674940], eax
        ret 
        UNREACHABLE_TRAP(0x4cee90)
    }
}
