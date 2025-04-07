#include "Common-PCH.h"

PROC_DECLARE(0x631e670, internal_631e670, public_631e670);
extern "C" NAKED register_t __cdecl internal_631e670()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3cd8]
        mov dword ptr ds : [public_6401928], eax
        ret 
        UNREACHABLE_TRAP(0x631e670)
    }
}
