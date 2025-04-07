#include "Content-PCH.h"

PROC_DECLARE(0x6ec5640, internal_6ec5640, public_6ec5640);
extern "C" NAKED register_t __cdecl internal_6ec5640()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xC]
        push esi
        push eax
        call dword ptr ds : [edx+0x74]
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec5640)
    }
}
