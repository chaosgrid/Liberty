#include "FLMaterials-PCH.h"


#define public_66f1758 _public_66f1758

PROC_DECLARE(0x66f1720, internal_66f1720, public_66f1720);
extern "C" NAKED register_t __cdecl internal_66f1720()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x50]
        test eax, eax
        je public_66f1758
        mov edx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x50]
        mov esi, dword ptr ss : [esp+0x14]
        push eax
        push esi
        call dword ptr ds : [public_6701034]
        add esp, 0xC
        mov byte ptr ds : [esi+edi-1], 0
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_66f1758 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x66f1720)
    }
}

#undef public_66f1758
