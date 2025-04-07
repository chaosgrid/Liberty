#include "Freelancer-PCH.h"

PROC_DECLARE(0x579830, internal_579830, public_579830);
extern "C" NAKED register_t __cdecl internal_579830()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xC]
        push 0xCC0020
        push 0
        push 0
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        push 0
        push 0
        push ecx
        call dword ptr ds : [public_5c6e44]
        ret 4
        UNREACHABLE_TRAP(0x579830)
    }
}
