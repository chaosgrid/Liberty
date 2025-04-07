#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfd830, internal_6bfd830, public_6bfd830);
extern "C" NAKED register_t __cdecl internal_6bfd830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e36c]
        mov dword ptr ds : [public_6c13fc8], eax
        ret 
        UNREACHABLE_TRAP(0x6bfd830)
    }
}
