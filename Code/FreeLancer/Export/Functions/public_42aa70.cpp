#include "FreeLancer-PCH.h"

PROC_DECLARE(0x42aa70, internal_42aa70, public_42aa70);
extern "C" NAKED register_t __cdecl internal_42aa70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ca358]
        mov dword ptr ds : [public_667ce0], eax
        ret 
        UNREACHABLE_TRAP(0x42aa70)
    }
}
