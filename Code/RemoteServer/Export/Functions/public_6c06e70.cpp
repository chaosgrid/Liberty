#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c06e70, internal_6c06e70, public_6c06e70);
extern "C" NAKED register_t __cdecl internal_6c06e70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5dc]
        mov dword ptr ds : [public_6c1427c], eax
        ret 
        UNREACHABLE_TRAP(0x6c06e70)
    }
}
