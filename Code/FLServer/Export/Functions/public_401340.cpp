#include "FLServer-PCH.h"

PROC_DECLARE(0x401340, internal_401340, public_401340);
extern "C" NAKED register_t __cdecl internal_401340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x401340)
    }
}
