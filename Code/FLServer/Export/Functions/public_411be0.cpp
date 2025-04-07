#include "FLServer-PCH.h"

PROC_DECLARE(0x411be0, internal_411be0, public_411be0);
extern "C" NAKED register_t __cdecl internal_411be0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0xC0]
        UNREACHABLE_TRAP(0x411be0)
    }
}
