#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02170, internal_6c02170, public_6c02170);
extern "C" NAKED register_t __cdecl internal_6c02170()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e468]
        mov dword ptr ds : [public_6c1411c], eax
        ret 
        UNREACHABLE_TRAP(0x6c02170)
    }
}
