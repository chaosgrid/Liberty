#include "FreeLancer-PCH.h"

PROC_DECLARE(0x564aa0, internal_564aa0, public_564aa0);
extern "C" NAKED register_t __cdecl internal_564aa0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67c068], eax
        mov byte ptr ds : [public_67c06c], al
        ret 
        UNREACHABLE_TRAP(0x564aa0)
    }
}
