#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f15d0, internal_66f15d0, public_66f15d0);
extern "C" NAKED register_t __cdecl internal_66f15d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x110]
        push 0
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x24]
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x66f15d0)
    }
}
