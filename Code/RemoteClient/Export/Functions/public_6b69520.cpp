#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69520, internal_6b69520, public_6b69520);
extern "C" NAKED register_t __cdecl internal_6b69520()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6eab4]
        mov dword ptr ds : [public_6b7461c], eax
        ret 
        UNREACHABLE_TRAP(0x6b69520)
    }
}
