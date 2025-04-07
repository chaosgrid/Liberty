#include "Freelancer-PCH.h"

PROC_DECLARE(0x4f8df0, internal_4f8df0, public_4f8df0);
extern "C" NAKED register_t __cdecl internal_4f8df0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [public_5ca230]
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 4
        UNREACHABLE_TRAP(0x4f8df0)
    }
}
