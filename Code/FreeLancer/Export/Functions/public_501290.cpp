#include "FreeLancer-PCH.h"

PROC_DECLARE(0x501290, internal_501290, public_501290);
extern "C" NAKED register_t __cdecl internal_501290()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x264], 0
        ret 
        UNREACHABLE_TRAP(0x501290)
    }
}
