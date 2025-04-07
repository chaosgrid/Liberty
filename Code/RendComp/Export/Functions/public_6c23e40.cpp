#include "RendComp-PCH.h"


#define public_6c23e74 _public_6c23e74

PROC_DECLARE(0x6c23e40, internal_6c23e40, public_6c23e40);
extern "C" NAKED register_t __cdecl internal_6c23e40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax+0x1C]
        cmp dword ptr ss : [esp+0xC], ecx
        jne public_6c23e74
        mov edx, dword ptr ss : [esp+8]
        add ecx, ecx
        push esi
        mov esi, dword ptr ds : [eax+0x18]
        mov eax, ecx
        push edi
        mov edi, dword ptr ds : [edx]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_6c23e74 : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6c23e40)
    }
}

#undef public_6c23e74
