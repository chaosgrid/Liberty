#include "Freelancer-PCH.h"

PROC_DECLARE(0x452f10, internal_452f10, public_452f10);
extern "C" NAKED register_t __cdecl internal_452f10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cd3d8]
        mov dword ptr ds : [public_66d274], eax
        ret 
        UNREACHABLE_TRAP(0x452f10)
    }
}
