#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a8000, internal_5a8000, public_5a8000);
extern "C" NAKED register_t __cdecl internal_5a8000()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_67ea24], ax
        mov byte ptr ds : [public_67ea26], al
        ret 
        UNREACHABLE_TRAP(0x5a8000)
    }
}
