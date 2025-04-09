#include "Freelancer-PCH.h"

PROC_DECLARE(0x494900, internal_494900, public_494900);
extern "C" NAKED register_t __cdecl internal_494900()
{
    __asm
    {
        mov dword ptr ds : [public_67203c], 0x3BA3D70A
        mov dword ptr ds : [public_672040], 0x3D449BA6
        mov dword ptr ds : [public_672044], 0
        ret 
        UNREACHABLE_TRAP(0x494900)
    }
}
