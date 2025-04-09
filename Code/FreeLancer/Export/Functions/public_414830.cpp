#include "FreeLancer-PCH.h"

PROC_DECLARE(0x414830, internal_414830, public_414830);
extern "C" NAKED register_t __cdecl internal_414830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [ecx+0x24], edx
        mov dword ptr ss : [esp+4], 1
        jmp dword ptr ds : [eax+0x20]
        UNREACHABLE_TRAP(0x414830)
    }
}
