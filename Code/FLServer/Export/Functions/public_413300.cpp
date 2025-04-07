#include "FLServer-PCH.h"

PROC_DECLARE(0x413300, internal_413300, public_413300);
extern "C" NAKED register_t __cdecl internal_413300()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_428c54], ax
        mov byte ptr ds : [public_428c56], al
        ret 
        UNREACHABLE_TRAP(0x413300)
    }
}
