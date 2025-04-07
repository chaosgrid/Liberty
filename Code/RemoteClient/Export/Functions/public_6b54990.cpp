#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54990, internal_6b54990, public_6b54990);
extern "C" NAKED register_t __cdecl internal_6b54990()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e444]
        mov dword ptr ds : [public_6b7402c], eax
        ret 
        UNREACHABLE_TRAP(0x6b54990)
    }
}
