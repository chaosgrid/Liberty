#include "Freelancer-PCH.h"

PROC_DECLARE(0x516fd0, internal_516fd0, public_516fd0);
extern "C" NAKED register_t __cdecl internal_516fd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db92c]
        mov dword ptr ds : [public_675214], eax
        ret 
        UNREACHABLE_TRAP(0x516fd0)
    }
}
