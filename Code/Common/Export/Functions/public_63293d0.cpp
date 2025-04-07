#include "Common-PCH.h"

PROC_DECLARE(0x63293d0, internal_63293d0, public_63293d0);
extern "C" NAKED register_t __cdecl internal_63293d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        ret 4
        UNREACHABLE_TRAP(0x63293d0)
    }
}
