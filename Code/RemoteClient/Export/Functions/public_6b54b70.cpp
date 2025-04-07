#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54b70, internal_6b54b70, public_6b54b70);
extern "C" NAKED register_t __cdecl internal_6b54b70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e44c]
        mov dword ptr ds : [public_6b74044], eax
        ret 
        UNREACHABLE_TRAP(0x6b54b70)
    }
}
