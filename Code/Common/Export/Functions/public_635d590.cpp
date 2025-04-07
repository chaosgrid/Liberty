#include "Common-PCH.h"

PROC_DECLARE(0x635d590, internal_635d590, public_635d590);
extern "C" NAKED register_t __cdecl internal_635d590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+8]
        sub eax, dword ptr ds : [ecx]
        neg eax
        sbb eax, eax
        inc eax
        ret 8
        UNREACHABLE_TRAP(0x635d590)
    }
}
