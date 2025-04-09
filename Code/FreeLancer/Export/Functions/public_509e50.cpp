#include "FreeLancer-PCH.h"

PROC_DECLARE(0x509e50, internal_509e50, public_509e50);
extern "C" NAKED register_t __cdecl internal_509e50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db0d0]
        mov dword ptr ds : [public_675070], eax
        ret 
        UNREACHABLE_TRAP(0x509e50)
    }
}
