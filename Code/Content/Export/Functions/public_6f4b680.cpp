#include "Content-PCH.h"

PROC_DECLARE(0x6f4b680, internal_6f4b680, public_6f4b680);
extern "C" NAKED register_t __cdecl internal_6f4b680()
{
    __asm
    {
        sub esp, 0x10
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], edx
        add ecx, 0x1B0
        lea edx, ss:[esp]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        mov dword ptr ss : [esp+8], 4
        mov dword ptr ss : [esp+4], offset public_6fb8580
        call dword ptr ds : [eax+4]
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f4b680)
    }
}
