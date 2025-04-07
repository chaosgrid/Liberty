#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b387c0, internal_6b387c0, public_6b387c0);
extern "C" NAKED register_t __cdecl internal_6b387c0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6b73d60], ax
        mov byte ptr ds : [public_6b73d62], al
        ret 
        UNREACHABLE_TRAP(0x6b387c0)
    }
}
