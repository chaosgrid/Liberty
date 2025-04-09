#include "Freelancer-PCH.h"

PROC_DECLARE(0x42aa90, internal_42aa90, public_42aa90);
extern "C" NAKED register_t __cdecl internal_42aa90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ca35c]
        mov dword ptr ds : [public_667cd8], eax
        ret 
        UNREACHABLE_TRAP(0x42aa90)
    }
}
