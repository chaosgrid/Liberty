#include "Freelancer-PCH.h"

PROC_DECLARE(0x457720, internal_457720, public_457720);
extern "C" NAKED register_t __cdecl internal_457720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        lea ecx, ds:[eax-4]
        fstp dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x54]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x457720)
    }
}
