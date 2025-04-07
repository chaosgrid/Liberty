#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee15d0, internal_6ee15d0, public_6ee15d0);
extern "C" NAKED register_t __cdecl internal_6ee15d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ee15d0)
    }
}
