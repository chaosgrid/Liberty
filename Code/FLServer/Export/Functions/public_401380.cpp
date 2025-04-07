#include "FLServer-PCH.h"

PROC_DECLARE(0x401380, internal_401380, public_401380);
extern "C" NAKED register_t __cdecl internal_401380()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c068]
        mov dword ptr ds : [public_425f20], eax
        ret 
        UNREACHABLE_TRAP(0x401380)
    }
}
