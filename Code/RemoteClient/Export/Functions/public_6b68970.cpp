#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b68970, internal_6b68970, public_6b68970);
extern "C" NAKED register_t __cdecl internal_6b68970()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea9c]
        mov dword ptr ds : [public_6b745fc], eax
        ret 
        UNREACHABLE_TRAP(0x6b68970)
    }
}
