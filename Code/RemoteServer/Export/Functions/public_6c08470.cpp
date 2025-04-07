#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c08470, internal_6c08470, public_6c08470);
extern "C" NAKED register_t __cdecl internal_6c08470()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e64c]
        mov dword ptr ds : [public_6c14304], eax
        ret 
        UNREACHABLE_TRAP(0x6c08470)
    }
}
