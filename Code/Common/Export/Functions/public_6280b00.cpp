#include "Common-PCH.h"

PROC_DECLARE(0x6280b00, internal_6280b00, public_6280b00);
extern "C" NAKED register_t __cdecl internal_6280b00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b858]
        mov dword ptr ds : [public_63fc070], eax
        ret 
        UNREACHABLE_TRAP(0x6280b00)
    }
}
