#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9830, internal_6bd9830, public_6bd9830);
extern "C" NAKED register_t __cdecl internal_6bd9830()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_6c13a10], eax
        mov byte ptr ds : [public_6c13a30], al
        mov dword ptr ds : [public_6c13a34], eax
        mov dword ptr ds : [public_6c13a08], offset public_6c0b8d8
        mov dword ptr ds : [public_6c13a0c], offset public_6c0b8d0
        mov dword ptr ds : [public_6c13a14], eax
        ret 
        UNREACHABLE_TRAP(0x6bd9830)
    }
}
