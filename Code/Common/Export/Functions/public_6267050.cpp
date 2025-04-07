#include "Common-PCH.h"

PROC_DECLARE(0x6267050, internal_6267050, public_6267050);
extern "C" NAKED register_t __cdecl internal_6267050()
{
    __asm
    {
        mov cl, byte ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        mov byte ptr ds : [eax], cl
        ret 4
        UNREACHABLE_TRAP(0x6267050)
    }
}
