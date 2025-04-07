#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b391d0, internal_6b391d0, public_6b391d0);
extern "C" NAKED register_t __cdecl internal_6b391d0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_6b73b30], eax
        mov dword ptr ds : [public_6b73d38], eax
        mov dword ptr ds : [public_6b73d3c], eax
        mov byte ptr ds : [public_6b73d40], al
        mov dword ptr ds : [public_6b73b28], offset public_6b6bb88
        mov dword ptr ds : [public_6b73b2c], offset public_6b6bb80
        mov dword ptr ds : [public_6b73d74], offset public_6b73b28
        ret 
        UNREACHABLE_TRAP(0x6b391d0)
    }
}
