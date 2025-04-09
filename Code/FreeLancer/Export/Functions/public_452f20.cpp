#include "FreeLancer-PCH.h"

PROC_DECLARE(0x452f20, internal_452f20, public_452f20);
extern "C" NAKED register_t __cdecl internal_452f20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cd3dc]
        mov dword ptr ds : [public_66d270], eax
        ret 
        UNREACHABLE_TRAP(0x452f20)
    }
}
