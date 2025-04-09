#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c7090, internal_4c7090, public_4c7090);
extern "C" NAKED register_t __cdecl internal_4c7090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d6d40]
        mov dword ptr ds : [public_673540], eax
        ret 
        UNREACHABLE_TRAP(0x4c7090)
    }
}
