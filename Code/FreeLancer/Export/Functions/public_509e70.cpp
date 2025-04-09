#include "FreeLancer-PCH.h"

PROC_DECLARE(0x509e70, internal_509e70, public_509e70);
extern "C" NAKED register_t __cdecl internal_509e70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db0d4]
        mov dword ptr ds : [public_675068], eax
        ret 
        UNREACHABLE_TRAP(0x509e70)
    }
}
