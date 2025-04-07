#include "Movie-PCH.h"

PROC_DECLARE(0x6ad3099, internal_6ad3099, public_6ad3099);
extern "C" NAKED register_t __cdecl internal_6ad3099()
{
    __asm
    {
        mov byte ptr ss : [ebp-0x90], 3
        ret 
        UNREACHABLE_TRAP(0x6ad3099)
    }
}
