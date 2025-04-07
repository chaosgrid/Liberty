#include "FLServer-PCH.h"

PROC_DECLARE(0x406320, internal_406320, public_406320);
extern "C" NAKED register_t __cdecl internal_406320()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x406320)
    }
}
