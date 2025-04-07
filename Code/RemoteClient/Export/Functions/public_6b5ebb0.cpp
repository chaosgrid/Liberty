#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5ebb0, internal_6b5ebb0, public_6b5ebb0);
extern "C" NAKED register_t __cdecl internal_6b5ebb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e764]
        mov dword ptr ds : [public_6b7431c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5ebb0)
    }
}
