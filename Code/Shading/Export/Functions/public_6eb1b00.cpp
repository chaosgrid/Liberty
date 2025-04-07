#include "Shading-PCH.h"


#define public_6eb1b38 _public_6eb1b38

PROC_DECLARE(0x6eb1b00, internal_6eb1b00, public_6eb1b00);
extern "C" NAKED register_t __cdecl internal_6eb1b00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x50]
        test eax, eax
        je public_6eb1b38
        mov edx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x50]
        mov esi, dword ptr ss : [esp+0x14]
        push eax
        push esi
        call dword ptr ds : [public_6ed1028]
        add esp, 0xC
        mov byte ptr ds : [esi+edi-1], 0
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_6eb1b38 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6eb1b00)
    }
}

#undef public_6eb1b38
