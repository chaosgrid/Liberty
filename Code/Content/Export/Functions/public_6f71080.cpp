#include "Content-PCH.h"

PROC_DECLARE(0x6f71080, internal_6f71080, public_6f71080);
extern "C" NAKED register_t __cdecl internal_6f71080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x20], eax
        ret 4
        UNREACHABLE_TRAP(0x6f71080)
    }
}
