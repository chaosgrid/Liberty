#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee2350, internal_6ee2350, public_6ee2350);
extern "C" NAKED register_t __cdecl internal_6ee2350()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x58]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+0x5C]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+0x60]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [eax+0x64]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], eax
        ret 0x14
        UNREACHABLE_TRAP(0x6ee2350)
    }
}
