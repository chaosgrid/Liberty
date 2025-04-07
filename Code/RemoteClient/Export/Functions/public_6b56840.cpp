#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b56840, internal_6b56840, public_6b56840);
extern "C" NAKED register_t __cdecl internal_6b56840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e518]
        mov dword ptr ds : [public_6b740cc], eax
        ret 
        UNREACHABLE_TRAP(0x6b56840)
    }
}
