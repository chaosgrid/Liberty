#include "Common-PCH.h"

PROC_DECLARE(0x6333430, internal_6333430, public_6333430);
extern "C" NAKED register_t __cdecl internal_6333430()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call dword ptr ds : [edx]
        ret 0xC
        UNREACHABLE_TRAP(0x6333430)
    }
}
