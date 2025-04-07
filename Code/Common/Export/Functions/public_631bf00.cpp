#include "Common-PCH.h"

PROC_DECLARE(0x631bf00, internal_631bf00, public_631bf00);
extern "C" NAKED register_t __cdecl internal_631bf00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3a5c]
        mov dword ptr ds : [public_64017fc], eax
        ret 
        UNREACHABLE_TRAP(0x631bf00)
    }
}
