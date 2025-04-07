#include "Shading-PCH.h"

PROC_DECLARE(0x6ebe460, internal_6ebe460, public_6ebe460);
extern "C" NAKED register_t __cdecl internal_6ebe460()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x6C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x6ebe460)
    }
}
