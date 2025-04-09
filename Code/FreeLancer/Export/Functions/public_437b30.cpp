#include "FreeLancer-PCH.h"

PROC_DECLARE(0x437b30, internal_437b30, public_437b30);
extern "C" NAKED register_t __cdecl internal_437b30()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0xEC]
        UNREACHABLE_TRAP(0x437b30)
    }
}
