#include "Common-PCH.h"

PROC_DECLARE(0x626f820, internal_626f820, public_626f820);
extern "C" NAKED register_t __cdecl internal_626f820()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, dword ptr ds : [ecx+4]
        neg eax
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x626f820)
    }
}
