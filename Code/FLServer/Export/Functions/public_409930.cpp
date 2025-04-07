#include "FLServer-PCH.h"

PROC_DECLARE(0x409930, internal_409930, public_409930);
extern "C" NAKED register_t __cdecl internal_409930()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_4277e0], ax
        mov byte ptr ds : [public_4277e2], al
        ret 
        UNREACHABLE_TRAP(0x409930)
    }
}
