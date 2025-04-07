#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b77150, internal_6b77150, public_6b77150);
extern "C" NAKED register_t __cdecl internal_6b77150()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x16C]
        inc ecx
        mov dword ptr ds : [eax+0x16C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6b77150)
    }
}
