#include "Common-PCH.h"

PROC_DECLARE(0x6333480, internal_6333480, public_6333480);
extern "C" NAKED register_t __cdecl internal_6333480()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx-0x10]
        mov dword ptr ss : [esp+8], eax
        add ecx, 0xFFFFFFF0
        lea eax, ss:[esp]
        push eax
        mov dword ptr ss : [esp+8], 3
        mov dword ptr ss : [esp+4], offset public_63a49f8
        call dword ptr ds : [edx+4]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6333480)
    }
}
