#include "Common-PCH.h"

PROC_DECLARE(0x626c270, internal_626c270, public_626c270);
extern "C" NAKED register_t __cdecl internal_626c270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639981c]
        mov dword ptr ds : [public_63fbbac], eax
        ret 
        UNREACHABLE_TRAP(0x626c270)
    }
}
