#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b67300, internal_6b67300, public_6b67300);
extern "C" NAKED register_t __cdecl internal_6b67300()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea54]
        mov dword ptr ds : [public_6b7459c], eax
        ret 
        UNREACHABLE_TRAP(0x6b67300)
    }
}
