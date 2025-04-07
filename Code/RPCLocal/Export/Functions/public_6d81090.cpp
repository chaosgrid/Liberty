#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81090, internal_6d81090, public_6d81090);
extern "C" NAKED register_t __cdecl internal_6d81090()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6dbb8f0], ax
        mov byte ptr ds : [public_6dbb8f2], al
        ret 
        UNREACHABLE_TRAP(0x6d81090)
    }
}
