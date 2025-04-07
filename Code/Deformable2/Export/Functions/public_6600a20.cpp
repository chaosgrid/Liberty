#include "Deformable2-PCH.h"

PROC_DECLARE(0x6600a20, internal_6600a20, public_6600a20);
extern "C" NAKED register_t __cdecl internal_6600a20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x68]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x6600a20)
    }
}
