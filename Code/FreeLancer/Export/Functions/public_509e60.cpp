#include "Freelancer-PCH.h"

PROC_DECLARE(0x509e60, internal_509e60, public_509e60);
extern "C" NAKED register_t __cdecl internal_509e60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db0d0]
        mov dword ptr ds : [public_67506c], eax
        ret 
        UNREACHABLE_TRAP(0x509e60)
    }
}
