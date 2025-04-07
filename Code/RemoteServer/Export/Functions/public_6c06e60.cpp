#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c06e60, internal_6c06e60, public_6c06e60);
extern "C" NAKED register_t __cdecl internal_6c06e60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5dc]
        mov dword ptr ds : [public_6c14278], eax
        ret 
        UNREACHABLE_TRAP(0x6c06e60)
    }
}
