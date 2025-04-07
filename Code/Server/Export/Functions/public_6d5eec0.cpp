#include "Server-PCH.h"

PROC_DECLARE(0x6d5eec0, internal_6d5eec0, public_6d5eec0);
extern "C" NAKED register_t __cdecl internal_6d5eec0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_6d8fb14]
        push ebx
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ds : [eax+0x14]
        push esi
        mov esi, dword ptr ds : [eax+0xC]
        xor ebx, ebx
        mov bl, byte ptr ds : [eax+0x10]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+8]
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call dword ptr ds : [edx+0x1E8]
        pop esi
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5eec0)
    }
}
