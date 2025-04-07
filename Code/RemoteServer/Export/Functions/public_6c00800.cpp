#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c00800, internal_6c00800, public_6c00800);
extern "C" NAKED register_t __cdecl internal_6c00800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e408]
        mov dword ptr ds : [public_6c1409c], eax
        ret 
        UNREACHABLE_TRAP(0x6c00800)
    }
}
