#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfddd0, internal_6bfddd0, public_6bfddd0);
extern "C" NAKED register_t __cdecl internal_6bfddd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e388]
        mov dword ptr ds : [public_6c13fe4], eax
        ret 
        UNREACHABLE_TRAP(0x6bfddd0)
    }
}
