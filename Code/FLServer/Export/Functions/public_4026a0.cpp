#include "FLServer-PCH.h"

PROC_DECLARE(0x4026a0, internal_4026a0, public_4026a0);
extern "C" NAKED register_t __cdecl internal_4026a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c08c]
        mov dword ptr ds : [public_425f5c], eax
        ret 
        UNREACHABLE_TRAP(0x4026a0)
    }
}
