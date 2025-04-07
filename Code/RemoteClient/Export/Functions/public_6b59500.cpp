#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59500, internal_6b59500, public_6b59500);
extern "C" NAKED register_t __cdecl internal_6b59500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e590]
        mov dword ptr ds : [public_6b74160], eax
        ret 
        UNREACHABLE_TRAP(0x6b59500)
    }
}
