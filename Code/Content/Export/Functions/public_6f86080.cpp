#include "Content-PCH.h"

PROC_DECLARE(0x6f86080, internal_6f86080, public_6f86080);
extern "C" NAKED register_t __cdecl internal_6f86080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        add ecx, 0x50
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f86080)
    }
}
