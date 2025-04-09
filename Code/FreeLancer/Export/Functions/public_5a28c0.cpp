#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a28c0, internal_5a28c0, public_5a28c0);
extern "C" NAKED register_t __cdecl internal_5a28c0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67dd90], eax
        mov dword ptr ds : [public_67dd94], eax
        mov dword ptr ds : [public_67dd98], eax
        mov dword ptr ds : [public_67dd9c], eax
        mov dword ptr ds : [public_67dda0], eax
        mov dword ptr ds : [public_67dda4], eax
        mov dword ptr ds : [public_67dda8], eax
        mov byte ptr ds : [public_67ddb4], 1
        mov byte ptr ds : [public_67ddb5], al
        ret 
        UNREACHABLE_TRAP(0x5a28c0)
    }
}
