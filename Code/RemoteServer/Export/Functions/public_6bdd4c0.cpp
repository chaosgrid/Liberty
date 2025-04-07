#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdd4c0, internal_6bdd4c0, public_6bdd4c0);
extern "C" NAKED register_t __cdecl internal_6bdd4c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bbb0]
        mov dword ptr ds : [public_6c13ad8], eax
        ret 
        UNREACHABLE_TRAP(0x6bdd4c0)
    }
}
