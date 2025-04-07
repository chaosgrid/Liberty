#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee1530, internal_6ee1530, public_6ee1530);
extern "C" NAKED register_t __cdecl internal_6ee1530()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6ee1530)
    }
}
