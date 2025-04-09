#include "FreeLancer-PCH.h"

PROC_DECLARE(0x59c8b0, internal_59c8b0, public_59c8b0);
extern "C" NAKED register_t __cdecl internal_59c8b0()
{
    __asm
    {
        mov eax, 0x41200000
        mov dword ptr ds : [ecx+0x894], eax
        mov dword ptr ds : [ecx+0x890], eax
        ret 4
        UNREACHABLE_TRAP(0x59c8b0)
    }
}
