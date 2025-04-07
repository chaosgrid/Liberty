#include "FLServer-PCH.h"

PROC_DECLARE(0x4026b0, internal_4026b0, public_4026b0);
extern "C" NAKED register_t __cdecl internal_4026b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c090]
        mov dword ptr ds : [public_425f4c], eax
        ret 
        UNREACHABLE_TRAP(0x4026b0)
    }
}
