#include "Shading-PCH.h"

PROC_DECLARE(0x6eb7b30, internal_6eb7b30, public_6eb7b30);
extern "C" NAKED register_t __cdecl internal_6eb7b30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x7C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x6eb7b30)
    }
}
