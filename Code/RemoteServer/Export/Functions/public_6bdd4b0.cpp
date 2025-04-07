#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdd4b0, internal_6bdd4b0, public_6bdd4b0);
extern "C" NAKED register_t __cdecl internal_6bdd4b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bbb0]
        mov dword ptr ds : [public_6c13ad4], eax
        ret 
        UNREACHABLE_TRAP(0x6bdd4b0)
    }
}
