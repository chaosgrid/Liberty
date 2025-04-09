#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4541d0, internal_4541d0, public_4541d0);
extern "C" NAKED register_t __cdecl internal_4541d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x54]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x4541d0)
    }
}
