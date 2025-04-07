#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d33f42);

PROC_DECLARE(0x6d33f42, internal_6d33f42, public_6d33f42);
extern "C" NAKED register_t __cdecl internal_6d33f42()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax+0x18]
        push esi
        push dword ptr ds : [edx+0x1050]
        mov esi, dword ptr ds : [edx+0x18]
        push dword ptr ds : [eax+0x1050]
        push dword ptr ds : [eax+0x105C]
        push dword ptr ds : [eax+0x1058]
        push ecx
        push esi
        call dword ptr ds : [public_6d6c93c]
        add esp, 0x18
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d33f42)
    }
}
