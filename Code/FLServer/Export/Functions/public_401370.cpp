#include "FLServer-PCH.h"

PROC_DECLARE(0x401370, internal_401370, public_401370);
extern "C" NAKED register_t __cdecl internal_401370()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c064]
        mov dword ptr ds : [public_425f30], eax
        ret 
        UNREACHABLE_TRAP(0x401370)
    }
}
