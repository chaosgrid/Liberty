#include "Server-PCH.h"

PROC_DECLARE(0x6d43410, internal_6d43410, public_6d43410);
extern "C" NAKED register_t __cdecl internal_6d43410()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_6d8f650], eax
        mov byte ptr ds : [public_6d8f654], al
        ret 
        UNREACHABLE_TRAP(0x6d43410)
    }
}
