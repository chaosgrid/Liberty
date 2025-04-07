#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b66410, internal_6b66410, public_6b66410);
extern "C" NAKED register_t __cdecl internal_6b66410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea14]
        mov dword ptr ds : [public_6b74554], eax
        ret 
        UNREACHABLE_TRAP(0x6b66410)
    }
}
