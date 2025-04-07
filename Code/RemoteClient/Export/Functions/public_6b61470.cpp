#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61470, internal_6b61470, public_6b61470);
extern "C" NAKED register_t __cdecl internal_6b61470()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e840]
        mov dword ptr ds : [public_6b743dc], eax
        ret 
        UNREACHABLE_TRAP(0x6b61470)
    }
}
