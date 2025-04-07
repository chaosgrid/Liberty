#include "Freelancer-PCH.h"

PROC_DECLARE(0x438bd0, internal_438bd0, public_438bd0);
extern "C" NAKED register_t __cdecl internal_438bd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5caef0]
        mov dword ptr ds : [public_66876c], eax
        ret 
        UNREACHABLE_TRAP(0x438bd0)
    }
}
