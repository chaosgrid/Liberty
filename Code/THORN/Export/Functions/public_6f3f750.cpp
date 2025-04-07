#include "THORN-PCH.h"

PROC_DECLARE(0x6f3f750, internal_6f3f750, public_6f3f750);
extern "C" NAKED register_t __cdecl internal_6f3f750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        inc ecx
        mov dword ptr ds : [eax+4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6f3f750)
    }
}
