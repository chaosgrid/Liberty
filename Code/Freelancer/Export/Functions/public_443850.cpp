#include "Freelancer-PCH.h"

PROC_DECLARE(0x443850, internal_443850, public_443850);
extern "C" NAKED register_t __cdecl internal_443850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x1C], eax
        ret 4
        UNREACHABLE_TRAP(0x443850)
    }
}
