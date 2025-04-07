#include "Deformable2-PCH.h"


#define public_65fecf8 _public_65fecf8

PROC_DECLARE(0x65fecc0, internal_65fecc0, public_65fecc0);
extern "C" NAKED register_t __cdecl internal_65fecc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x50]
        test eax, eax
        je public_65fecf8
        mov edx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x50]
        mov esi, dword ptr ss : [esp+0x14]
        push eax
        push esi
        call dword ptr ds : [public_6601028]
        add esp, 0xC
        mov byte ptr ds : [esi+edi-1], 0
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_65fecf8 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x65fecc0)
    }
}

#undef public_65fecf8
