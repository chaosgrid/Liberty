#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee2040, internal_6ee2040, public_6ee2040);
extern "C" NAKED register_t __cdecl internal_6ee2040()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x54], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ee2040)
    }
}
