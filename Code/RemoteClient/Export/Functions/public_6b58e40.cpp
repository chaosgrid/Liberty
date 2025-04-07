#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b58e40, internal_6b58e40, public_6b58e40);
extern "C" NAKED register_t __cdecl internal_6b58e40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e570]
        mov dword ptr ds : [public_6b7412c], eax
        ret 
        UNREACHABLE_TRAP(0x6b58e40)
    }
}
