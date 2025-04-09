#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4540a0, internal_4540a0, public_4540a0);
extern "C" NAKED register_t __cdecl internal_4540a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x90]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x4540a0)
    }
}
