#include "Common-PCH.h"

PROC_DECLARE(0x626f840, internal_626f840, public_626f840);
extern "C" NAKED register_t __cdecl internal_626f840()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [ecx+4]
        sbb eax, eax
        neg eax
        ret 4
        UNREACHABLE_TRAP(0x626f840)
    }
}
