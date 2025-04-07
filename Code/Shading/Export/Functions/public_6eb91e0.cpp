#include "Shading-PCH.h"

PROC_DECLARE(0x6eb91e0, internal_6eb91e0, public_6eb91e0);
extern "C" NAKED register_t __cdecl internal_6eb91e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x68]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x6eb91e0)
    }
}
