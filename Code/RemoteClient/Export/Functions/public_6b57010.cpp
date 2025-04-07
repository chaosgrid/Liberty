#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b57010, internal_6b57010, public_6b57010);
extern "C" NAKED register_t __cdecl internal_6b57010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e540]
        mov dword ptr ds : [public_6b740ec], eax
        ret 
        UNREACHABLE_TRAP(0x6b57010)
    }
}
