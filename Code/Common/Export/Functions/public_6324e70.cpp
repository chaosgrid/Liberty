#include "Common-PCH.h"

PROC_DECLARE(0x6324e70, internal_6324e70, public_6324e70);
extern "C" NAKED register_t __cdecl internal_6324e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x34], eax
        mov dword ptr ds : [ecx+0x38], edx
        ret 8
        UNREACHABLE_TRAP(0x6324e70)
    }
}
