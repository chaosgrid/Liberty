#include "Freelancer-PCH.h"

PROC_DECLARE(0x4154c0, internal_4154c0, public_4154c0);
extern "C" NAKED register_t __cdecl internal_4154c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [ecx+0x1C], edx
        mov dword ptr ss : [esp+4], 1
        jmp dword ptr ds : [eax+0x20]
        UNREACHABLE_TRAP(0x4154c0)
    }
}
