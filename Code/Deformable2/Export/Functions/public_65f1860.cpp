#include "Deformable2-PCH.h"

PROC_DECLARE(0x65f1860, internal_65f1860, public_65f1860);
extern "C" NAKED register_t __cdecl internal_65f1860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0xC]
        UNREACHABLE_TRAP(0x65f1860)
    }
}
