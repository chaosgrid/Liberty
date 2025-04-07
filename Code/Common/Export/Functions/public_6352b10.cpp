#include "Common-PCH.h"

PROC_DECLARE(0x6352b10, internal_6352b10, public_6352b10);
extern "C" NAKED register_t __cdecl internal_6352b10()
{
    __asm
    {
        push esi
        mov eax, ecx
        mov edx, dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ds : [ecx+0x20]
        mov esi, dword ptr ds : [ecx]
        push edi
        mov edi, dword ptr ds : [eax+0x44]
        push edi
        push edx
        push eax
        call dword ptr ds : [esi+8]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6352b10)
    }
}
