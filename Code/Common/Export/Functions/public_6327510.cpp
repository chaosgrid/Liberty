#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x6327510, internal_6327510, public_6327510);
extern "C" NAKED register_t __cdecl internal_6327510()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6327510)
    }
}
