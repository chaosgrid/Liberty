#include "FLServer-PCH.h"

PROC_DECLARE(0x4156e0, internal_4156e0, public_4156e0);
extern "C" NAKED register_t __cdecl internal_4156e0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_429510], ax
        mov byte ptr ds : [public_429512], al
        ret 
        UNREACHABLE_TRAP(0x4156e0)
    }
}
