#include "FreeLancer-PCH.h"

PROC_DECLARE(0x489a40, internal_489a40, public_489a40);
extern "C" NAKED register_t __cdecl internal_489a40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d2450]
        mov dword ptr ds : [public_671f60], eax
        ret 
        UNREACHABLE_TRAP(0x489a40)
    }
}
