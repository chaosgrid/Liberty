#include "FLServer-PCH.h"

PROC_DECLARE(0x40f820, internal_40f820, public_40f820);
extern "C" NAKED register_t __cdecl internal_40f820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41dabc]
        mov dword ptr ds : [public_427ccc], eax
        ret 
        UNREACHABLE_TRAP(0x40f820)
    }
}
