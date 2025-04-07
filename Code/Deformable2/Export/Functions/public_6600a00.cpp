#include "Deformable2-PCH.h"

PROC_DECLARE(0x6600a00, internal_6600a00, public_6600a00);
extern "C" NAKED register_t __cdecl internal_6600a00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x68]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x6600a00)
    }
}
