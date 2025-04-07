#include "THORN-PCH.h"

PROC_DECLARE(0x6f3a920, internal_6f3a920, public_6f3a920);
extern "C" NAKED register_t __cdecl internal_6f3a920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x100], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6f3a920)
    }
}
