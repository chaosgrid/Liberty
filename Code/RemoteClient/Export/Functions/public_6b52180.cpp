#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52180, internal_6b52180, public_6b52180);
extern "C" NAKED register_t __cdecl internal_6b52180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3a4]
        mov dword ptr ds : [public_6b73f64], eax
        ret 
        UNREACHABLE_TRAP(0x6b52180)
    }
}
