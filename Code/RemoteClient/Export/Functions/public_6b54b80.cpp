#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54b80, internal_6b54b80, public_6b54b80);
extern "C" NAKED register_t __cdecl internal_6b54b80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e450]
        mov dword ptr ds : [public_6b7403c], eax
        ret 
        UNREACHABLE_TRAP(0x6b54b80)
    }
}
